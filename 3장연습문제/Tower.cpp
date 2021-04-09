#include "Tower.h"

//주석 지우면 바로 사용할 수 있습니다
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
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}
