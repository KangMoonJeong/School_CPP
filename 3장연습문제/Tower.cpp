#include "Tower.h"

//�ּ� ����� �ٷ� ����� �� �ֽ��ϴ�
//Tower::Tower()
//{
//	height = 1;
//}
//Tower::Tower(int h)
//{
//	this->height = height;
//}

Tower::Tower() : Tower(1)
{
}

Tower::Tower(int h) : height(h)
{
}

int Tower::getHeight()
{
	return height;
}

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
