#include <iostream>
using namespace std;

void myswap(int a, int b, double c)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void myswap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void myswap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int arr[10] = {1, 2, 3, 4, 5};
int& foo(int in)
{
	return arr[in];
}
	

int main(void)
{
	int m = 1, mm = 2;
	int& n = m;

	n = mm;
	cout << "m=" << m << endl;

	int *pm;
	pm = &m;
	pm = &mm;

	cout << "&pm=0x" << hex << &pm << endl;
	cout << "&m=0x" << &m << endl;
	cout << "pm=0x" << pm << endl;
	cout << "&n=0x" << &n << endl;
	cout << dec;

	int a = 1, b = 2;
	cout << "a=" << a << ", b=" << b <<endl;
	myswap(&a, &b);
	cout << "a=" << a << ", b=" << b << endl;
	myswap(a, b);
	cout << "a=" << a << ", b=" << b <<endl;
	foo(2) = 1000;
	cout << "arr[2]=" << arr[2] << endl;
	
	return 0;
}
