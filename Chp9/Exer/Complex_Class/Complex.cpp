#include <iostream>
#include <cmath>
#include "Complex.h"
#include <cmath>
using namespace std;

Complex::Complex(double Re, double Im) 
{
    setPoint(Re, Im);
}

Complex &Complex::setImaginaryPart(double Im)
{
    imagPart = Im;
    return *this;
}

Complex &Complex::setRealPart(double Re)
{
    realPart = Re;
    return *this;
}

Complex &Complex::setPoint(double Re, double Im)
{
    realPart=Re; 
    imagPart=Im;

    return *this;
}

double Complex::getRealPart() const
{
    return realPart;
}

double Complex::getImaginaryPart() const
{
    return imagPart;
}

double Complex::getMod() const
{
    return sqrt(realPart*realPart + imagPart*imagPart);
}

double Complex::getArg() const
{
    return atan2(imagPart,realPart);
}

Complex Complex::add(Complex& z)
{
    Complex z_eq((this->getRealPart() + z.getRealPart()), (this->getImaginaryPart() + z.getImaginaryPart()));
    z_eq.printPoint();
    return z_eq;
}

Complex Complex::subtract(Complex& z)
{
    Complex z_eq((this->getRealPart() - z.getRealPart()), (this->getImaginaryPart() - z.getImaginaryPart()));
    z_eq.printPoint();
    return z_eq;
}

Complex Complex::multiply(Complex& z)
{
    double Re = (this->getRealPart())*(z.getRealPart()) - ((this->getImaginaryPart())*(z.getImaginaryPart()));
    double Im = (this->getImaginaryPart()*(z.getRealPart()) + this->getRealPart()*z.getImaginaryPart());
    Complex z_eq(Re, Im);
    z_eq.printPoint();
    return z_eq;
}

void Complex::printEuler() const
{
    cout << getMod() << "e^(i" << getArg() << ")" << endl;
}

void Complex::printPoint() const
{
    cout << "("<< getRealPart() << "," << getImaginaryPart() << ")" << endl;
}