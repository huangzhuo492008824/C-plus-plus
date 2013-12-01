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
	//error!返回了局部变量的引用
	//int tmp;
	//return tmp;
	
	return arr[in];
}
//引用的好处：
//1.引用比指针更安全
//2.引用的代码比指针更简洁
//引用的用法：
//1.引用做函数参数，相当于传参传的对象本身
//2.引用做函数返回值类型，注意：不能返回局部变量的引用
int main()
{
	int m = 1, mm = 2;

	int& n = m; //int& 就是引用类型, n相当于变量m的别名或外号,就是变量本身
	n = mm; //m = mm;
	cout << "m=" << m << endl;
	//int& n;
	//n = m;
	//int& r = 1000;

	int *pm;// = &m;
	pm = &m;
	pm = &mm;
	
	cout << "&pm=0x" << hex << &pm << endl;
	cout << "&m=0x" << &m << endl;
	cout << "&n=0x" << &n << endl;
	cout << dec;

	int a = 1, b = 2;
	cout << "a=" << a << ", b=" << b << endl;
	myswap(&a, &b);
	cout << "a=" << a << ", b=" << b << endl;
//	myswap(a, b);
	cout << "a=" << a << ", b=" << b << endl;

	foo(2) = 1000;
	cout << "arr[2]=" << arr[2] << endl;
	return 0;
}
