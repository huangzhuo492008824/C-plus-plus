#include <iostream>
using namespace std;

class A{
public:
	int a;
};

class B:public A{
public:
	int b;
};

int main(void)
{
	int n = 10;
	cout << "n=" << n << endl;
	A a;
	B* p = (B*)&a;
	p->b = 1000;
	cout << "n= " << n << endl;
	
	return 0;
}
	
