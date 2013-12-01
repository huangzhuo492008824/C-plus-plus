#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

template<class T> void print(list<T>& a)
{
	typename list<T>::iterator it; //模板函数处理类中类时，需要加typename关键字；
	for (it = a.begin(); it != a.end(); it++)
		cout << *it << endl;
}

int main(void)
{
	string str[] = {"Alex", "John", "Robert"};

	list<int> v1;
	list<int> v2(10);
	list<int> v3(10, 0);
	
	list<string> v4(str+0, str+3);
	list<string>::iterator sit = v4.begin();
	while(sit != v4.end())
		cout << *sit++ << " ";
	cout << endl;
	list<string> v5(v4);
#if 0
	for (int i = 0; i < v5.size(); i++)
		cout << v5[i] << " ";
	cout << endl;
#endif
	print(v5);

	return 0;
}
