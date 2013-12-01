#include <iostream>
#include <stdio.h>
//#include <cstdio> //c++中把stdio.h做了一个新的封装，得到一个新的头文件cstdio
using namespace std;

namespace A{
	int a;
	void goo(){cout << "A::goo" << endl;}
};
//using namespace A;
using A::goo;


namespace B{
	int a;
};
//using namespace B;

//void goo(){cout << "goo" << endl;}

//无名名字空间
namespace {
	void foo(){cout << "::foo" << endl;}
};

//void foo(){cout << "foo" << endl;} //可以foo()调用，也可以::foo()调用

int a; //等价于::a

int main()
{
	int a;

	A::a = 1000;
	B::a = 100;
	a = 10;
	::a = 200;
	::printf("<printf>a=%d\n", a);
	cout << "a=" << a << endl;//std名字空间里才有cout对象
	cout << "::a=" << ::a << endl;//std名字空间里才有cout对象
	cout << "A::a=" << A::a << endl;
	cout << "B::a=" << B::a << endl;
	A::goo();
	goo();
	::foo();
	foo();

	return 0;
}
