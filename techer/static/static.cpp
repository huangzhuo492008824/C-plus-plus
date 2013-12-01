#include <iostream>
using namespace std;


class A{
public:
	int q; //普通成员变量
	static int i; //静态成员变量是整个类的所有对象都共享的数据，只有一份拷贝，所以不用保存在对象内部
	static void foo(){ cout << "A::foo" << i << endl;/*cout << this;*/} //静态成员函数可以直接用类名来调用，即使对象还不存在.静态成员函数只能访问静态成员变量，不能访问普通成员变量;静态成员函数里不能使用this指针
};

int A::i;

int main()
{
#if 0
	A a;
	cout << "sizeof(a)=" << sizeof(a) << endl;
#endif
	A::i = 10;
	A::foo();
	A a, b;
	cout << "a.i=" << a.i << endl;
	a.i = 1000;
	cout << "a.i=" << a.i << endl;
	cout << "b.i=" << b.i << endl;
	a.foo();

	void (*p)(void) = &A::foo;
	p();

	return 0;
}
