#include <iostream>
using namespace std;

class Complex{
	friend Complex myadd(const Complex&,const Complex&);
public:
	Complex();	
	Complex(double r, double i);
	~Complex();
	Complex operator+(const Complex& a);
	Complex& operator=(const Complex& a);

	void display() const;
private:
	double real, img;
};

Complex& Complex::operator=(const Complex&a)
{
	cout << "operator=" << endl;
	if (*this == a)
		return *this;
	this->real = a.real;
	this->img  = a.img;

	return *this;
}

Complex Complex::operator+(const Complex& a)
{
	Complex tmp;
	tmp.real = this->real + a.real;
	tmp.img	 = this->img + a.img;
	
	return tmp;
}

Complex myadd(const Complex& a, const Complex& b)
{
	Complex tmp;
	
	tmp.real = b.real + a.real;
	tmp.img	 = b.img + a.img;

	return tmp;
}

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
	cout << real;
	if (img > 0)
	cout << "+" << img << "i" << endl;
	else if (img < 0)
	cout << img << "i" << endl;
	else
		cout << endl;
}


