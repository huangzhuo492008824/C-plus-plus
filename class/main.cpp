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
//	People a(20, "XiaoMing"), b(26, "XiaoLi");
	cout << "====" << endl;
//	a.set_age(20);
//	a.set_name("XiaoMing");
	//a.name = new char[strlen("XiaoMing")+1];
	//strcpy(a.name, "XiaoMing");
	//b.age = 26;
//	b.set_age(26);
	//b.name = new char[strlen("XiaoLi")+1];
	//strcpy(b.name, "XiaoLi");
//	b.set_name("XiaoLi");
#if 0
	a.display();
	b.display();
	a.display(b);
#endif

	People c;
	c.display();

	return 0;
}
