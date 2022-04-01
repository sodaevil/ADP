#include "Account.h"

Account::Account()
{
}

Account::Account(string id, string userName, string pass, int money)
{
    this->id = id;
    this->userName = userName;
    this->pass = pass;
    this->money = money;
}

string Account::getUserName()
{
    return userName;
}

string Account::getPass()
{
    return pass;
}

int Account::getMoney()
{
    return this->money;
}
