#pragma once
#include<fstream>
#include<vector>
#include"Account.h"
class DataAccount
{
private:
	vector<Account> list;
public:
	DataAccount();
	void readFile();
	int findByUser(string user);
	vector<Account> getList();

};

