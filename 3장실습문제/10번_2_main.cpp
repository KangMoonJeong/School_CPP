#include "10번.h"

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
