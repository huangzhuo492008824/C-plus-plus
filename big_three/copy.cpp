#include <iostream>
#include <cstring>
using namespace std;

class Person{
public:
	Person(int myage, const char *myname);
	Person(const char *myname);
	//作为好习惯，提供无参构造函数
	Person(){};
	//拷贝构造函数
	Person(const Person& a);
	~Person();
	//赋值构造函数
	Person& operator=(const Person& a);
	void display() const;
	void set_name(const char *newname);
private:
	int age;
	char *name;
};

void Person::set_name(const char *newname)
{
	delete[] name;
	name = new char[strlen(newname)+1];
	strcpy(name, newname);
}
Person::Person(const char *myname)
:age(0), name(NULL)
{
	cout << "ctor(const char*)*" << endl;
	name = new char[strlen(myname)+1];
	strcpy(name, myname);
}

void Person::display() const
{
	cout << "Person info:" << endl;
	cout << "Name:" << this->name << endl;
	cout << "age:" << this->age << endl;
}

Person::Person(int myage, const char *myname)
:age(myage), name(NULL)
{
	cout << "ctor(int, const char*)*" << endl;
	name = new char[strlen(myname)+1];
	strcpy(name, myname);
}

#if 1
Person::Person(const Person& a)
:age(age), name(new char[strlen(a.name)+1])
{
	cout << "ctor(cost Person&)" << endl;
	this->age = a.age;
	name = new char[strlen(a.name)+1];
	strcpy(name, a.name);
}
#endif

Person::~Person()
{
	cout << "dtor" << endl;
	delete[] name;
}

#if 1
Person& Person::operator=(const Person& a)
{
	//作用：1.提高代码效率，2保证不会因为自赋值破坏自身数据
	if(this == &a)
		return *this;
	age = a.age;
	delete[] name;
	name = new char[strlen(a.name)+1];
	strcpy(name, a.name);

	return *this;
}
#endif

int main(void)
{
#if 0
	Person a(10, "xiao ming"), b(16, "xiao hong");
	a.display();
	b.display();
	a = b;

	a.display();
	Person c = b;
	c.display();
#endif
//	Person d;
	
	Person d(10, "xiaowu");
	d = "xiao wang";
	d.display();
	d.set_name("xiao Wu");

	return 0;
}
