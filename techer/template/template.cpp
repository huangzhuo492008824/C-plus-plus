#include <iostream>
using namespace std;

//模板类
template<class C, int max> struct Buffer
{
	C v[max];
};

//模板函数
template<class T> T power(T a, int exp)
{
	T ans = a;
	while(--exp)
		ans *= a;

	return ans;
}

template<class T> void myswap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

class Complex{
	friend ostream& operator<<(ostream& o, const Complex& a);
public:
	Complex():real(0), img(0){}
	Complex(double r, double i):real(r), img(i){}

private:
	double real, img;
};

ostream& operator<<(ostream& o, const Complex& a)
{
	o << a.real << "+" << a.img << "i";

	return o;
}

int main()
{
#if 0
	Buffer<int, 10> a;
	Buffer<int, 6> b; //a和b是两个不同类型的变量

	for(int i=0; i<10; ++i)
		a.v[i] = i + 1;
	for(int i=0; i<10; ++i)
		cout << "a.v[" << i << "]=" << a.v[i] << endl;
#endif
	cout << power<int>(2, 3) << endl;
	cout << power(2, 3) << endl;
	cout << power<double>(1.5, 2) << endl;
	cout << power(1.5, 2) << endl;

	int a = 1, b = 2;
	double c = 3.1, d = 4.2;
	myswap(a, b);
	cout << "a=" << a << ", b=" << b << endl;
	myswap(c, d);
	cout << "c=" << c << ", d=" << d << endl;
	Complex e(1.2, 3.4), f(5.6, 7.8);
	myswap(e, f);
	cout << "e=" << e << ", f=" << f << endl;

	return 0;
}
