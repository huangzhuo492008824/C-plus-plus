#include <iostream>
#include <cstdio>
using namespace std;

namespace A{
	int a;
	void goo(){cout << "A::goo" << endl;}
};

using A::goo;

namespace B{
	int a;
};

namespace {
	void foo(){cout << "::foo" << endl;}
};

int a;//等价与::a

int main(void)
{
	int a;
	A::a = 1000;
	B::a = 100;
	a = 10;

	::printf("<printf>a=%d\n", a);
	cout << "a=" << a << endl;
	cout << "::a=" << ::a << endl;
	cout << "A::a=" << A::a << endl;
	cout << "B::a=" << B::a << endl;
	A::goo();
	goo();
	::foo();
	foo();
	
	return 0;
}
