#include <cstring>

/*struct*/class People{
public:
	//构造函数：
	//1.函数名和类名相同
	//2.构造函数可以重载
	//3.构造函数会在创建对象时自动执行，不用我们去调用它
	//4.构造函数没有返回值，注意，不是返回void
	//5.构造函数的作用是用来初始化对象内部的数据（成员变量)
	//6.创建对象不是构造函数做的，构造函数只是创建对象之后初始化对象
//	People(int myage, const char *myname);
//	People();
	//析构函数：
	//1.函数名是在类名前加~
	//2.析构函数不可重载
	//3.对象即将被销毁时(销毁之前)，会自动调用析构函数
	//4.析构函数的作用是用来清理对象(比如delete在堆上new分配的数据)
	//5.销毁对象也不是析构函数做的，它只是在销毁对象之前完成对象的数据清理工作
//	~People();

	//函数，方法，成员函数
	void talk(); //说话
	void display()const; //显示信息
	void display(const People& a)const;//显示本类型的其他对象的数据
	int get_age()const{return age;} //直接实现在类里的函数，它是内联函数
	void set_age(int myage){ age = myage;}
	char * get_name()const{return name;}
	void set_name(const char* name)
	{
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
	}

private:
	//数据，属性，成员变量
	char *name;
	int age;
};

