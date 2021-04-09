#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
	string owner;
	int id;
	int money;

public:
	Account(string owner, int id, int money);
	void deposit(int amount);
	string getOwner();
	int inquiry();
	int withdraw(int amount);

};


