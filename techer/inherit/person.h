class Person{
public:
	Person();
	Person(int myage, const char*myname);
	~Person();
	void display() const;
//private: //只能被本类型成员函数访问
protected: //能被父类和子类的成员函数访问,如果没有派生类，则protected等价于private权限
	int age;
	char *name;
};
