#include <iostream>
#include <stdexcept>
#include <cmath>
#include <iomanip>
#include "Complex.h"
using namespace std;

Complex::Complex(double Re, double Im)
{
    real = Re;
    imaginary = Im;

    modulus = sqrt(real*real + imaginary*imaginary);
    argument = atan2(imaginary, real);
}

Complex Complex::fromCartesian(double Re, double Im)
{
    return Complex(Re,Im);
}

Complex Complex::fromPolarCoordinate(double mod, double arg)
{
    double Re = mod * cos(arg);
    double Im = mod * sin(arg);
    Complex z = Complex(Re, Im);
    z.argument = arg;
    z.modulus = mod;
    return z;
}

ostream &operator<<(ostream & output, const Complex & z)
{
    output << "Cartesian form is:\n";
    output << fixed<< setprecision(4) << z.real 
     << (z.imaginary > 0 ? " + " : " - " )
     << z.imaginary << 
     "i" << endl;

    output << "Polar form is:\n";
    output << z.modulus << setw(2) << "e**(" << z.argument  << setw(2) << "i)" << endl;

    return output;
}

Complex Complex::operator+(const Complex & z) const
{
    return Complex::fromCartesian(real + z.real, imaginary + z.imaginary);
}

Complex Complex::operator-(const Complex & z) const
{
    return Complex::fromCartesian(real - z.real, imaginary - z.imaginary);
}

Complex Complex::operator*(const Complex & z) const
{
    return Complex::fromPolarCoordinate(modulus * z.modulus, argument + z.argument);
}

Complex Complex::operator/(const Complex & z) const
{
    return Complex::fromPolarCoordinate(modulus / z.modulus, argument - z.argument);
}

Complex Complex::power(double exponent) const
{
    return Complex::fromPolarCoordinate(pow(modulus, exponent), argument*exponent);
}

double Complex::getRealPart() const
{
    return real;
}

double Complex::getImaginaryPart() const
{
    return imaginary;
}

double Complex::getArgument() const
{
    return argument;
}

double Complex::getModulus() const
{
    return modulus;
}

array<double , 2> Complex::getCartesian() const
{
    array<double , 2> cart = {real, imaginary};
    return cart;
}

array<double , 2> Complex::getPolar() const
{
    array<double , 2> polar = {modulus, argument};
    return polar;
}

Complex &Complex::operator=(const Complex& z)
{
    if (this == &z)
    {
        return *this;
    }

    this->real = z.real;
    this->imaginary = z.imaginary;
    this->argument = z.argument;
    this->modulus = z.modulus;

    return *this;
}

bool Complex::operator==(const Complex& z) const
{
    if (real == z.real && imaginary == z.imaginary && argument == z.argument && modulus == z.modulus)
    {
        return true;
    }
    return false;
}

bool Complex::isZero() const
{
    return (real == 0 && imaginary == 0) ? true : false;
}