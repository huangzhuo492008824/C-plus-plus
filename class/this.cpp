#include <iostream>
using namespace std;

class A{
public:
	void foo(int n)
	{
		cout << "n=" << n << endl;
		cout << "this=" << hex << this << endl;
	}
};

typedef void (*f_t)(int);
//成员函数里的函数指针
typedef void (A::*foo_t)(int);
typedef void (*func_t)(void *, int );

void test()
{
//	cout << "this=0x" << hex << this << endl;
}

void get_addr(func_t& t, foo_t f)
{
	union{
		foo_t _f;
		func_t _t;
	}uf;
	uf._f = f;
	t = uf._t;
}

int main(void)
{
//	test();
	A a;
	cout << "&a=" << hex << &a << dec << endl;
	a.foo(10);

#if 1
	foo_t p1;
	p1 = &A::foo;
	(a.*p1)(10);
#endif
#if 1
//成员函数赋值给普通函数
	func_t p2;
	get_addr(p2, &A::foo);
	cout << "=====" << endl;
	p2(&a, 10);
	a.foo(10);
#endif

	return 0;
}
