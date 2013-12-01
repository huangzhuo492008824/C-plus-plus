class Person{
public:
	Person(int myage, const char *myname);
	~Person();
	void display() const;
//private://只能被本类型的

protected:	//能被父类和子类的成员函数访问，如没有派生类，则等价于private
	int age;
	char *name;
};
