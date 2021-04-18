#include "9번.h"

int main()
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;

	return 0;
}

Oval::Oval()
{
	width = 1;
	height = 1;
}

Oval::Oval(int h, int w)
{
	width = w;
	height = h;
}

int Oval::getWidth()
{
	return width;
}

int Oval::getHeight()
{
	return height;
}

void Oval::set(int w, int h)
{
	width = w;
	height = h;
}

void Oval::show()
{
	cout << "width = " << width << ", height = " << height << "\n";

}

Oval::~Oval()
{
	cout << "Oval 소멸 : " << "width = " << width << ", height = " << height << "\n";
}
