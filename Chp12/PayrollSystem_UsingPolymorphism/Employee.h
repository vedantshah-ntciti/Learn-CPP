#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
    public:
        Employee(std::string &,std::string &,std::string &);

        virtual ~Employee() {}

        void setFirstName( const std::string &);
        std::string getFirstName() const;

        void setLastName( const std::string &);
        std::string getLastName() const;

        void setPANnumber( const std::string &);
        std::string getPANnumber() const;

        virtual double earnings() const=  0;
        virtual void print() const = 0;

    private:
        std::string firstName;
        std::string lastName;
        std::string PANnumber;
};

#endif