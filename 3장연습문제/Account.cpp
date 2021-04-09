#include "Account.h"

Account::Account(string owner, int id, int money) : owner(owner), id(id), money(money)
{

}
//Account::Account(string owner, int id, int money) 
//{
//	this->owner = owner;
//	this->id = id;
//	this->money = money;
//}

void Account::deposit(int amount)
{
	money += amount;
}

string Account::getOwner()
{
	return owner;
}

int Account::inquiry()
{
	return money;
}

int Account::withdraw(int amount)
{
	return money -= amount;
}

int main()
{
	Account a("Kitae", 1, 5000);
	a.deposit(50000);	//�Ա�
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);	//���
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;

	return 0;
}
