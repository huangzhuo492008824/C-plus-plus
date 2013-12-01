#include <iostream>
using namespace std;
//1.运算符重载只能改变运算方法，但不能改变运算符的优先级和结合性
//2.运算符重载在你定义了一个新的用户类型时，如果需要进行运算，编译器不知道这个新的类型该怎么计算，只能由你通过重载运算符来告诉编译器该怎么计算。
//3.运算符重载一般都可以重载成两种形式：一种是类的成员函数，对于双目运算符，它只要一个参数（两个操作数中左操作数由对象自身传入，右操作数由函数参数传入）。另一种是不属于类的顶层函数，对于双目运算符，需要两个参数传入运算符的两个操作数。
//4.operator=赋值运算符，C++规定它只能以类的成员函数形式重载。
//5.operator<<流输出运算符，它只能以不属于类的顶层函数形式重载。
class Complex{
	//类的友元函数
	friend Complex myadd(const Complex&, const Complex&);
	friend Complex operator+(const Complex&, const Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
public:
	Complex();
	Complex(double r, double i);
	~Complex();
	Complex& operator=(const Complex& a);
	//Complex operator+(const Complex& a);
	void display() const;
private:
	double real, img; //实部， 虚部
};

Complex& Complex::operator=(const Complex& a)
{
	cout << "operator=" << endl;

	if(this == &a)
		return *this;

	this->real = a.real;
	this->img = a.img;

	return *this;
}

ostream& operator<<(ostream& o, const Complex& a)
{
	if(a.img < 0)
		o << a.real << a.img << "i";
	else if(a.img > 0)
		o << a.real << "+" << a.img << "i";
	else // img==0
		o << a.real;
	return o;
}
	

Complex myadd(const Complex& a, const Complex& b)
{
	Complex tmp;
	tmp.real = a.real + b.real;
	tmp.img = a.img + b.img;

	return tmp;
}

Complex operator+(const Complex& a, const Complex& b)
{
	Complex tmp;
	tmp.real = a.real + b.real;
	tmp.img = a.img + b.img;

	return tmp;
}

#if 0
Complex Complex::operator+(const Complex& a)
{
	Complex tmp;
	tmp.real = this->real + a.real;
	tmp.img = this->img + a.img;

	return tmp;
}
#endif
Complex::Complex()
:real(0), img(0)
{

}

Complex::Complex(double r, double i)
:real(r), img(i)
{

}

Complex::~Complex()
{

}

void Complex::display() const
{
	if(img < 0)
		cout << real << img << "i";
	else if(img > 0)
		cout << real << "+" << img << "i";
	else // img==0
		cout << real;
	cout << endl;
}

int main()
{
	Complex a(1.2, 3.2), b(2.6, -6.7), d(1.6, 2.3);
	a.display();
	b.display();
	d.display();

	Complex c;
	c = a + b + d;//赋值，调用的是编译器给我们提供的默认的operator=赋值运算符函数
	c.display();

	c = myadd(myadd(a, b), d);
	c.display();
	cout << "========" << endl;
	//cout << c;
	cout << "c=" << c << endl;


	return 0;
}
