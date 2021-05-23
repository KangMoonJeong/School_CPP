#include <iostream>
using namespace std;


class Location
{
	int width, height;
public:
	Location() { this->width = this->height = 0; }
	Location(int width, int height)
	{
		this->width = width;
		this->height = height;
	}
	void show();
};

void Location::show()
{
	cout << this->width << this->height << endl;
}

int main()
{
	/* 정적 */
	Location lct;
	Location lct2(10, 20);
	lct.show();
	lct2.show();


	/* 동적 */
	Location* DynamicLct = new Location();
	Location* DynamicLct2 = new Location(20, 30);
	
	DynamicLct->show();
	DynamicLct2->show();
	
	delete DynamicLct;
	delete DynamicLct2;

	return 0;
}