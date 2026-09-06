#include <iostream>
#include <string>
#include "Hardware.h"
using namespace std;

Hardware::Hardware(int ID,const std::string & tool , int quan,  double costPerItem) : id(ID)
{
    setToolName(tool);
    setQuantity(quan);
    setCost(costPerItem);
}

void Hardware::setToolName(const string &tool)
{
    int length = tool.size();
    length = (length < 15) ? length : 14;
    tool.copy(toolName , length);
    toolName[length] = '\0';
}

void Hardware::setQuantity(int quan)
{
    if (quan < 0)
    {
        cerr << "Quantity cannot be negative";
    }
    else
    {
        quantity = quan;
    }
}

void Hardware::setCost(double CostPerItem)
{
    if (CostPerItem < 0.0)
    {
        cerr << "Cost per item cannot be negative or zero";
    }
    else
    {
        cost = CostPerItem;
    }
}

std::string Hardware::getToolName() const
{
    return toolName;
}

int Hardware::getQuantity() const
{
    return quantity;
}

int Hardware::getToolID() const
{
    return id;
}

double Hardware::getCost() const
{
    return cost;
}


