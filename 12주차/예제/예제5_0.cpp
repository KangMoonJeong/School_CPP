#include <iostream>
using namespace std;
void swap_value(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void swap_address(int *a, int* b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int m = 2, n = 0;
	swap_value(m, n);
	cout << m << ' ' << n << endl;

	swap_address(&m, &n);
	cout << m << ' ' << n << endl;
	return 0;
}