#include <iostream>
#include <iomanip>
using namespace std;

class Matrix{
	friend ostream& operator<<(ostream& o, const Matrix& a);
public:
	Matrix();
	Matrix(int r, int c);
	Matrix(const Matrix& a);
	~Matrix();

	Matrix& operator=(const Matrix& a);
	Matrix 	operator+(const Matrix& a);
	Matrix 	operator*(const Matrix& a);
	Matrix transpose();
	void init(int a);//初始化矩阵
	
private:
	int row, col;
	int **arry;
//	int a[row][col] = new int[row][col];	
};

Matrix::Matrix()
:row(1), col(1)
{
	arry = new int*[row];	
	for (int i = 0; i < row; ++i)
		arry[i] = new int[col];
}

Matrix::Matrix(int r, int c)
:row(r), col(c)
{
	arry = new int*[r];
	for (int i = 0; i < r; ++i)
		arry[i] = new int[c];
}
#if 1
Matrix::Matrix(const Matrix& a)
:row(a.row), col(a.col)
{
	//分配空间
	arry = new int*[a.row];
	for (int i = 0; i < a.row; ++i)
		arry[i] = new int[a.col];
	//把a的值复制过来	
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arry[i][j] = a.arry[i][j];
}
#endif

Matrix& Matrix::operator=(const Matrix& a)
{	
	//判断是否是自赋值
	if (this == &a)
		return *this;

	//先销毁原来的数据	
	for (int i = 0; i < row; ++i)
		delete[] arry[i];
	delete[] arry;

	row = a.row;
	col = a.col;
	//分配空间
	arry = new int*[a.row];
	for (int i = 0; i < a.row; ++i)
		arry[i] = new int[a.col];
	//把a的值复制过来	
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arry[i][j] = a.arry[i][j];
			
}


Matrix 	Matrix::operator+(const Matrix& a)
{
	if (this->row == a.row && this->col == a.col) {
		Matrix tmp(a.row, a.col);
		for (int i = 0; i < a.row; ++i)
			for (int j = 0; j < a.col; ++j)
				tmp.arry[i][j] = this->arry[i][j] + a.arry[i][j];
		return tmp;
	}		
	else
		throw 1;
//		cerr << "can't add!" << endl;
}

Matrix 	Matrix::operator*(const Matrix& a)
{
	if (this->col == a.row) {
		Matrix tmp(this->row, a.col);
		for (int i = 0; i < this->row; ++i)
			for (int j = 0; j < a.col; ++j)
				for (int k = 0; k < this->col; ++k)
				tmp.arry[i][j] += this->arry[i][k] + a.arry[k][j];
		return tmp;
	}		
	else
		throw 2;
//		cerr << "can't add!" << endl;
}

Matrix Matrix::transpose()
{
	Matrix tmp(this->col, this->row);	
	for (int i = 0; i < tmp.row; ++i)
		for (int j = 0; j < tmp.col; ++j)
			tmp.arry[i][j] = arry[j][i];
	return tmp;
}


Matrix::~Matrix()
{
	for (int i = 0; i < row; ++i)				delete[] arry[i];
	delete[] arry;
}


void Matrix::init(int a)
{
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arry[i][j] = a++;
}

ostream& operator<<(ostream& o, const Matrix& a)
{
	o << right; //右对齐,一直生效
	for (int i = 0; i < a.row; ++i)	{
		for (int j = 0; j < a.col; ++j)
			o << setw(4) << a.arry[i][j];//setw（）每次调用只生效一次
		o << endl;
	}
	o << "===================="<< endl;
}

int main(void)
{
	Matrix a(1, 3);	
	a.init(1);
	
	Matrix b(2, 3);	
	b.init(3);
	
	Matrix g;	
//	b = a;
#if 0
	cout << "a:" << endl;
	cout << a << endl;
	cout << "b:" << endl;
	cout << b << endl;
	cout << c << endl;
	Matrix d = b+a, g;
	cout << d;
#endif
	Matrix c;	
	c = b.transpose();
	cout << "c:" << endl << c << endl;

	try{
#if 0
		g = a + c;	
		cout << g << endl;
#endif	
		cout << "g:" << endl;
		g = a*b;
		cout << g << endl;
	}
	catch(int e){
		if (e == 1)
			cerr << "can't add!" << endl;
		else if(e == 2)
			cerr << "can't multiply!" << endl;
	}
		

	return 0;
}
