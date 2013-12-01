#include <iostream>
using namespace std;

class A{
public:
	//成员函数里才可以使用this指针
	//成员函数参数列表里有一个大家看不到的隐含参数:this指针
	void foo(int n)
	{
		cout << "n=" << n << endl;
		cout << "this=0x" << hex << this << dec << endl;
	}
};

typedef void (*f_t)(int); //顶层函数指针
typedef void (A::*foo_t)(int); //成员函数指针
typedef void (*func_t)(void *, int); //用来模拟成员函数执行的普通函数指针

//不属于类的顶层函数中不能使用this指针
void test()
{
	//cout << "this=0x" << hex << this << dec << endl;
}

//成员函数指针类型不能强转成任何其他类型
void get_addr(func_t& t, foo_t f) //把指针f转换成指针t（f和t类型不同)
{
	union{
	  foo_t _f;
	  func_t _t;
	}uf;
	uf._f = f;
	t = uf._t;
}

int main()
{
	test();
	A a;
	cout << "&a=0x" << hex << &a << dec << endl;
	a.foo(10);

	foo_t p1;
	p1 = &A::foo;
	(a.*p1)(10); //等价于a.foo(10)
#if 0
	f_t p2;
	p2 = (f_t)&A::foo;
	p2 = &A::foo;
	p2(10);
#endif	
	func_t p2;
	//p2 = &A::foo; //error!
	get_addr(p2, &A::foo);
	cout << "=========" << endl;
	p2(&a, 10);
	a.foo(10);

	return 0;
}
