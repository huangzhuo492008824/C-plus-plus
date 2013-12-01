#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v(3, 0);
	v[0] = 100;
	v.at(1) = 200;
	for (int i = 0; i < 3; ++i)
		cout << v.at(i) << ' ';
	cout << v[4] ; 
	cout << v.at(4);
	cout << endl;
	return 0;
}
