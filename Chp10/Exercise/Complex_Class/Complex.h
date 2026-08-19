#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <array>

class Complex
{
    friend std::ostream &operator<<(std::ostream &, const Complex &);

    public:
        static Complex fromCartesian(double  , double );
        static Complex fromPolarCoordinate(double , double );

        Complex operator+(const Complex&) const ;
        Complex operator-(const Complex&) const ;
        Complex operator*(const Complex&) const ;
        Complex operator/(const Complex&) const ;

        Complex power(double) const;

        
        Complex &operator=(const Complex&)  ;
        bool isZero() const;
        bool operator==(const Complex&) const ;

        double getRealPart() const;
        double getImaginaryPart() const;
        
        double getModulus() const;
        double getArgument() const;

        std::array<double , 2> getCartesian() const;
        std::array<double , 2> getPolar() const;
    private:
        explicit Complex(double = 0, double = 0);

        double real;
        double imaginary;
        double argument;
        double modulus;
};


#endif