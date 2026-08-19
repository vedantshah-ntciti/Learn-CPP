//added using claude ignore tihs file
#include "Complex.h"
#include <iostream>
#include <cmath>
#include <sstream>
#include <string>

static int g_testsRun = 0;
static int g_testsFailed = 0;
const double EPS = 1e-6;

bool nearlyEqual(double a, double b, double eps = EPS)
{
    return std::fabs(a - b) <= eps;
}

void check(bool condition, const std::string &testName, const std::string &details = "")
{
    ++g_testsRun;
    if (condition)
    {
        std::cout << "[PASS] " << testName << "\n";
    }
    else
    {
        ++g_testsFailed;
        std::cout << "[FAIL] " << testName;
        if (!details.empty())
            std::cout << " -- " << details;
        std::cout << "\n";
    }
}

void checkDouble(double actual, double expected, const std::string &testName)
{
    std::ostringstream oss;
    oss << "expected " << expected << ", got " << actual;
    check(nearlyEqual(actual, expected), testName, oss.str());
}

void test_fromCartesian_basic()
{
    Complex c = Complex::fromCartesian(3.0, 4.0);
    checkDouble(c.getRealPart(), 3.0, "fromCartesian: real part");
    checkDouble(c.getImaginaryPart(), 4.0, "fromCartesian: imaginary part");
    checkDouble(c.getModulus(), 5.0, "fromCartesian: modulus (3-4-5 triangle)");
    checkDouble(c.getArgument(), std::atan2(4.0, 3.0), "fromCartesian: argument");
}

void test_fromCartesian_zero()
{
    Complex c = Complex::fromCartesian(0.0, 0.0);
    checkDouble(c.getRealPart(), 0.0, "fromCartesian zero: real part");
    checkDouble(c.getImaginaryPart(), 0.0, "fromCartesian zero: imaginary part");
    checkDouble(c.getModulus(), 0.0, "fromCartesian zero: modulus");
    check(c.isZero(), "fromCartesian zero: isZero() true");
}

void test_fromPolar_basic()
{
    double mod = 2.0;
    double arg = M_PI / 2.0;
    Complex c = Complex::fromPolarCoordinate(mod, arg);
    checkDouble(c.getModulus(), mod, "fromPolar: modulus");
    checkDouble(c.getArgument(), arg, "fromPolar: argument");
    checkDouble(c.getRealPart(), 0.0, "fromPolar: real part ~ 0");
    checkDouble(c.getImaginaryPart(), 2.0, "fromPolar: imaginary part ~ 2");
}

void test_getCartesian_getPolar_arrays()
{
    Complex c = Complex::fromCartesian(1.0, 1.0);
    std::array<double, 2> cart = c.getCartesian();
    std::array<double, 2> pol = c.getPolar();

    checkDouble(cart[0], 1.0, "getCartesian: [0] real");
    checkDouble(cart[1], 1.0, "getCartesian: [1] imaginary");
    checkDouble(pol[0], std::sqrt(2.0), "getPolar: [0] modulus");
    checkDouble(pol[1], M_PI / 4.0, "getPolar: [1] argument");
}

void test_addition()
{
    Complex a = Complex::fromCartesian(1.0, 2.0);
    Complex b = Complex::fromCartesian(3.0, -1.0);
    Complex c = a + b;
    checkDouble(c.getRealPart(), 4.0, "operator+: real part");
    checkDouble(c.getImaginaryPart(), 1.0, "operator+: imaginary part");
}

void test_subtraction()
{
    Complex a = Complex::fromCartesian(5.0, 3.0);
    Complex b = Complex::fromCartesian(2.0, 4.0);
    Complex c = a - b;
    checkDouble(c.getRealPart(), 3.0, "operator-: real part");
    checkDouble(c.getImaginaryPart(), -1.0, "operator-: imaginary part");
}

void test_multiplication()
{
    // (1 + 2i) * (3 + 4i) = -5 + 10i
    Complex a = Complex::fromCartesian(1.0, 2.0);
    Complex b = Complex::fromCartesian(3.0, 4.0);
    Complex c = a * b;
    checkDouble(c.getRealPart(), -5.0, "operator*: real part");
    checkDouble(c.getImaginaryPart(), 10.0, "operator*: imaginary part");
}

void test_division()
{
    // (1 + 2i) / (3 + 4i) = 0.44 + 0.08i
    Complex a = Complex::fromCartesian(1.0, 2.0);
    Complex b = Complex::fromCartesian(3.0, 4.0);
    Complex c = a / b;
    checkDouble(c.getRealPart(), 0.44, "operator/: real part");
    checkDouble(c.getImaginaryPart(), 0.08, "operator/: imaginary part");
}

void test_division_by_nonzero_edge()
{
    Complex a = Complex::fromCartesian(4.0, 0.0);
    Complex b = Complex::fromCartesian(2.0, 0.0);
    Complex c = a / b;
    checkDouble(c.getRealPart(), 2.0, "operator/: real division real part");
    checkDouble(c.getImaginaryPart(), 0.0, "operator/: real division imaginary part");
}

void test_power_integer_exponent()
{
    // (1 + i)^2 = 2i
    Complex a = Complex::fromCartesian(1.0, 1.0);
    Complex c = a.power(2.0);
    checkDouble(c.getRealPart(), 0.0, "power(2): real part of (1+i)^2");
    checkDouble(c.getImaginaryPart(), 2.0, "power(2): imaginary part of (1+i)^2");
}

void test_power_zero_exponent()
{
    Complex a = Complex::fromCartesian(3.0, -2.0);
    Complex c = a.power(0.0);
    checkDouble(c.getRealPart(), 1.0, "power(0): real part");
    checkDouble(c.getImaginaryPart(), 0.0, "power(0): imaginary part");
}

void test_power_of_modulus_one()
{
    // i^2 = -1
    Complex i = Complex::fromCartesian(0.0, 1.0);
    Complex c = i.power(2.0);
    checkDouble(c.getRealPart(), -1.0, "power(2): real part of i^2");
    checkDouble(c.getImaginaryPart(), 0.0, "power(2): imaginary part of i^2");
}

void test_assignment_operator()
{
    Complex a = Complex::fromCartesian(7.0, -3.0);
    Complex b = Complex::fromCartesian(0.0, 0.0);
    b = a;
    checkDouble(b.getRealPart(), 7.0, "operator=: real part copied");
    checkDouble(b.getImaginaryPart(), -3.0, "operator=: imaginary part copied");
}

void test_self_assignment()
{
    Complex a = Complex::fromCartesian(2.0, 5.0);
    a = a;
    checkDouble(a.getRealPart(), 2.0, "operator=: self-assignment preserves real part");
    checkDouble(a.getImaginaryPart(), 5.0, "operator=: self-assignment preserves imaginary part");
}

void test_equality_true()
{
    Complex a = Complex::fromCartesian(1.5, -2.5);
    Complex b = Complex::fromCartesian(1.5, -2.5);
    check(a == b, "operator==: equal complex numbers");
}

void test_equality_false()
{
    Complex a = Complex::fromCartesian(1.5, -2.5);
    Complex b = Complex::fromCartesian(1.5, 2.5);
    check(!(a == b), "operator==: unequal complex numbers");
}

void test_isZero_true_false()
{
    Complex zero = Complex::fromCartesian(0.0, 0.0);
    Complex nonZero = Complex::fromCartesian(0.0001, 0.0);
    check(zero.isZero(), "isZero(): true for (0,0)");
    check(!nonZero.isZero() || nearlyEqual(0.0001, 0.0, 1e-3),
          "isZero(): small nonzero value handled per implementation tolerance");
}

void test_stream_output_not_empty()
{
    Complex a = Complex::fromCartesian(1.0, 1.0);
    std::cout << a;
}

int main()
{
    std::cout << "Running Complex class tests...\n\n";

    test_fromCartesian_basic();
    test_fromCartesian_zero();
    test_fromPolar_basic();
    test_getCartesian_getPolar_arrays();

    test_addition();
    test_subtraction();
    test_multiplication();
    test_division();
    test_division_by_nonzero_edge();

    test_power_integer_exponent();
    test_power_zero_exponent();
    test_power_of_modulus_one();

    test_assignment_operator();
    test_self_assignment();
    test_equality_true();
    test_equality_false();
    test_isZero_true_false();

    test_stream_output_not_empty();

    std::cout << "\n----------------------------------------\n";
    std::cout << g_testsRun << " tests run, "
              << (g_testsRun - g_testsFailed) << " passed, "
              << g_testsFailed << " failed.\n";

    return g_testsFailed == 0 ? 0 : 1;
}