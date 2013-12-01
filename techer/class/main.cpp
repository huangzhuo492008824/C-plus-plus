#include "people.h"
#include <iostream>
#include <cstring>
using namespace std;

class Cat{
	void access_people(const People & a);
};

void Cat::access_people(const People & a)
{
	cout << "Cat find:" << endl;
	cout << "Name:" << a.get_name() << ", Age:" << a.get_age() << endl;
}

int main()
{
#if 0
	People a(20, "XiaoMing"), b(26, "XiaoLi");//People a;调用的是无参构造函数
	cout << "========" << endl;
	//a.set_age(20);
	//a.set_name("XiaoMing");
	//a.name = new char[strlen("XiaoMing")+1];
	//strcpy(a.name, "XiaoMing");
	//b.age = 26;
	//b.set_age(26);
	//b.name = new char[strlen("XiaoLi")+1];
	//strcpy(b.name, "XiaoLi");
	//b.set_name("XiaoLi");
	a.display();
	b.display();
	a.display(b);
	People c; //People c();不是调用无参构造函数，而是声明了一个函数c
	c.display();
#endif
	People *pa = new People(20, "XiaoMing");
	pa->display();
	People *pb = new People;
	pb->display();
	delete pa;
	delete pb;

	return 0;
}
