#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	int r = 0;
	int sum = 0;
	int amount;
	cout << "���� ���� >> ";
	cin >> amount;
	Circle* circle = new Circle[amount];
	for (int i = 0; i < amount; i++)
	{
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circle[i].setRadius(r);
		if (circle[i].getArea() > 100)
			sum++;
	}
	cout << "������ 100���� ū ���� " << sum << "���Դϴ�" << endl;
	delete[] circle;
	return 0;
}