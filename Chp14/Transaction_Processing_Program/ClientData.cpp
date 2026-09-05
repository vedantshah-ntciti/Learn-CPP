#include <string>
#include "ClientData.h"
using namespace std;

ClientData::ClientData(int accountNumberValue, const string &lastName, const string &Firstname, double balanceValue)
    : accountNumber(accountNumberValue) , balance(balanceValue)
{
    setLastName(lastName);
    setFirstName(Firstname);
}


int ClientData::getAccountNumber() const 
{
    return accountNumber;
}


std::string ClientData::getLastName() const 
{
    return lastname ;
}


std::string ClientData::getFirstName() const 
{
    return firstname ;
}


double ClientData::getBalance() const 
{
    return balance;
}


void ClientData::setAccountNumber(int accountNumberValue)
{
    accountNumber = accountNumberValue;
}

void ClientData::setLastName(const string &last)
{
    int length = last.size();
    length = ( length <15 ? length : 14);
    last.copy(lastname , length);
    lastname[length] = '\0';
}

void ClientData::setFirstName(const string &first)
{
    int length = first.size();
    length = ( length < 10? length : 9);
    first.copy(firstname , length);
    firstname[length] = '\0';
}

void ClientData::setBalance(double balanceValue)
{
    balance = balanceValue;
}
