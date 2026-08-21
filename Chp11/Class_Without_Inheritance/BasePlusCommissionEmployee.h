#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>

class BasePlusCommissionEmployee
{
    public:
        BasePlusCommissionEmployee(const std::string &, const std::string &,  const std::string &, double = 0.0 , double = 0.0 , double = 0.0);

        void setFirstName(const std::string &);
        std::string getFirstName() const;

        void setLastName(const std::string &);
        std::string getLastName() const;

        void setPanNumber(const std::string &);
        std::string getPanNumber() const;

        void setCommissionRate(double);
        double getCommissionRate() const;

        void setGrossSales(double);
        double getGrossSales() const;

        void setBaseSalary(double);
        double getBaseSalary() const;

        double earnings() const;
        void print() const;
    
    private:
        std::string firstName;
        std::string lastName;
        std::string PanNumber;
        double grossSales;
        double commissionRates;
        double baseSalary;
};

#endif