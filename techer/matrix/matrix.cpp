#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Matrix{
	friend ostream& operator<<(ostream& o, const Matrix& a);
public:
	Matrix();
	Matrix(int r, int c);
	Matrix(const Matrix& a);
	~Matrix();
	Matrix& operator=(const Matrix& a);
	Matrix operator+(const Matrix& a);
	Matrix operator*(const Matrix& a);
	Matrix transpose();
	void init(int a);//初始化矩阵
	int& get_value(int row, int col);//int& operator()(int row, int col);
private:
	int row, col;//行列
	//在堆上的二维数组
	int **arr;
};

int& Matrix::get_value(int row, int col)
{
	if((row < 1) || (row > this->row) || (col < 1) || (col > this->col))
		throw 3; //越界

	return arr[row-1][col-1];
}

Matrix::Matrix(int r, int c)
:row(r), col(c)
{
	arr = new int*[r];
	for(int i=0; i<r; ++i)
		arr[i] = new int[c];
}

Matrix::Matrix()
:row(1), col(1)
{
	arr = new int*[row];
	for(int i=0; i<row; ++i)
		arr[i] = new int[col];
}

void Matrix::init(int a)
{
	for(int i=0; i<row; ++i)
		for(int j=0; j<col; ++j)
			arr[i][j] = a++;
}

Matrix::~Matrix()
{
	for(int i=0; i<row; ++i)
		delete[] arr[i];
	delete[] arr;
}

ostream& operator<<(ostream& o, const Matrix& a)
{
	o << right; //右对齐

	for(int i=0; i<a.row; ++i)
	{
		for(int j=0; j<a.col; ++j)
			o << setw(4) << a.arr[i][j]; //setw每次操作后会自动变成setw(0)，所以它只生效一次，每次显示数值都要在数值前面重新设置宽度
		o << endl;
	}
	o << "=======================" << endl;

	return o;
}

Matrix::Matrix(const Matrix& a)
:row(a.row), col(a.col)
{
	//按a的大小分配空间
	arr = new int*[a.row];
	for(int i=0; i<a.row; ++i)
		arr[i] = new int[a.col];

	//把a的值复制过来
	for(int i=0; i<row; ++i)
		for(int j=0; j<col; ++j)
			arr[i][j] = a.arr[i][j];
}

Matrix& Matrix::operator=(const Matrix& a)
{
	//判断是否自赋值
	if(this == &a)
		return *this;

	//先销毁原来的数据
	for(int i=0; i<row; ++i)
		delete[] arr[i];
	delete[] arr;

	row = a.row;
	col = a.col;

	//按a的大小分配空间
	arr = new int*[a.row];
	for(int i=0; i<a.row; ++i)
		arr[i] = new int[a.col];

	//把a的值复制过来
	for(int i=0; i<row; ++i)
		for(int j=0; j<col; ++j)
			arr[i][j] = a.arr[i][j];
}

Matrix Matrix::operator+(const Matrix& a)
{
	if((this->row != a.row) || (this->col != a.col))
	{
		throw 1;
	}

	Matrix tmp(a.row, a.col);

	//做加法
	for(int i=0; i<row; ++i)
		for(int j=0; j<col; ++j)
			tmp.arr[i][j] = arr[i][j] + a.arr[i][j];
	return tmp;
}

Matrix Matrix::operator*(const Matrix& a)
{
	if(this->col != a.row)
		throw 2;

	//做乘法
	Matrix tmp(this->row, a.col);

	for(int i=0; i<this->row; ++i)
		for(int j=0; j<a.col; ++j)
		{
			int sum = 0;
			for(int k=0; k<a.row; ++k)
				sum += arr[i][k]*a.arr[k][j];
			tmp.arr[i][j] = sum;
		}

	return tmp;
}

Matrix Matrix::transpose()
{
	Matrix tmp(this->col, this->row);
	for(int i=0; i<tmp.row; ++i)
		for(int j=0; j<tmp.col; ++j)
			tmp.arr[i][j] = arr[j][i];

	return tmp;
}

int main()
{
	Matrix a(4, 5);
	a.init(1);

	Matrix b(2, 3);
	b.init(3);

	Matrix c;
	c.init(8);
	//cout << a;
	//cout << b << c;
	Matrix d(3,3), e(3,2);
	d.init(1);
	e.init(3);
	cout << d << e;
#if 0
	cout << "=== operator= ===" << endl;
	b = a;
	cout << b;
	cout << "=== Matrix(const Matrix&) ===" << endl;
	Matrix d = a;
	cout << d;
#endif
	try{
		//c = a + b;
		//c = d + e;
		//c = a * b;
		c = d * e;
		cout << c;
		c.get_value(1, 2) = 100;
		cout << c;
	}
	catch(int e)
	{
		if(e == 1)
			cerr << "can't add" << endl;
		else if (e == 2)
			cerr << "can't multply" << endl;
		else if (e == 3)
			cerr << "out of range!" << endl;
	}
	cout << "here it is!" << endl;

	Matrix f(3, 7);
	f.init(6);
	c = f.transpose();
	cout << c;

#if 0
	try{
		throw runtime_error("aaa");
	}
	catch(runtime_error e)
	{
		cerr << e.what() << endl;
	}
#endif
	return 0;
}

