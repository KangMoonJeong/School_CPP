#pragma once
#include <iostream>
using namespace std;

class Add
{
private:
	int a;
	int b;

public:
	void setValue(int x, int y);
	int calculate();
};

void Add::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Add::calculate()
{
	return a + b;
}

class Sub
{
private:
	int a;
	int b;

public:
	void setValue(int x, int y);
	int calculate();
};

void Sub::setValue(int x, int y)
{
	a = x;
	b = y;
}

int Sub::calculate()
{
	return a - b;
}

class Mul
{
private:
	int a;
	int b;

public:
	void setValue(int x, int y);
	int calculate();
};

void Mul::setValue(int x, int y)
{
	a = x;
	b = y;
}

int Mul::calculate()
{
	return a * b;
}

class Div
{
private:
	int a;
	int b;

public:
	void setValue(int x, int y);
	int calculate();
};

void Div::setValue(int x, int y)
{
	a = x;
	b = y;
}

int Div::calculate()
{
	return a / b;
}

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	int x, y;
	char c;
	while (1)
	{
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> c;
		switch (c)
		{
		case('+'):
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case('-'):
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case('*'):
			m.setValue(x, y);;
			cout << m.calculate() << endl;
			break;
		case('/'):
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		default:
			cout << "잘못된 연산자 입력" << endl;
			break;
		}
	}
	return 0;
}
