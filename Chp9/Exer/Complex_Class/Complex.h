#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    public:
        explicit Complex(double = 0.0 , double = 0.0);
        Complex &setRealPart(double);
        Complex &setImaginaryPart(double);
        Complex &setPoint(double , double);

        Complex add(Complex&);
        Complex subtract(Complex&);
        Complex multiply(Complex&);

        double getRealPart() const;
        double getImaginaryPart() const;
        double getMod() const;
        double getArg() const;
        void printPoint() const;
        void printEuler() const;

    private:
        double realPart;
        double imagPart;
};

#endif