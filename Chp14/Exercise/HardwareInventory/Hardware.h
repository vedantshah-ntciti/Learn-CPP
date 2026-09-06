#ifndef HARDWARE_H
#define HARDWARE_H

#include <string>

class Hardware
{
    public:
        Hardware(int = 0 ,const std::string & = "" ,int = 0 , double = 0.0);

        void setToolName(const std::string &);
        void setQuantity(int );
        void setCost(double );

        std::string getToolName() const;
        int getQuantity() const;
        double getCost() const;
        int getToolID() const;

    private:
        char toolName[15];
        int quantity;
        int id;
        double cost;
};

#endif
