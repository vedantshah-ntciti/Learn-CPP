#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>

class CommissionEmployee
{
    public:
        CommissionEmployee(const std::string &, const std::string &,  const std::string &, double = 0.0 , double = 0.0);

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

        double earnings() const;
        void print() const;
    
    protected:
        std::string firstName;
        std::string lastName;
        std::string PanNumber;
        double grossSales;
        double commissionRates;
};

#endif