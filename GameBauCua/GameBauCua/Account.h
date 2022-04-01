#pragma once
#include <string>

using namespace std;
 class Account
{
private:
	string id;
	string userName;
	string pass;
	int money;
public:
	Account();
	Account(string id, string userName, string pass,int money);
	string getUserName();
	string getPass();
	int getMoney();
};

