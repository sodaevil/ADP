#include "DataAccount.h"
DataAccount::DataAccount()
{
	readFile();
}

void DataAccount::readFile()
{
	fstream fi("ListAcc.txt");
	string id, user, pass, tmp_money;
	while (fi.good())
	{
		getline(fi, id, ',');
		getline(fi, user, ',');
		getline(fi, pass, ',');
		getline(fi, tmp_money, '\n');
		if (id == "") break;
		Account tmp(id, user, pass, stoi(tmp_money));
		list.push_back(tmp);
	}
}

int DataAccount::findByUser(string user)
{
	int pos = -1;
	for (int i = 0; i < list.size(); i++) {
		if (list.at(i).getUserName().compare(user) == 0) {
			return i;
		}
	}
	return pos;
}

vector<Account> DataAccount::getList()
{
	return this->list;
}

