#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v(3, 0);
	v[0] = 10;
	v.at(1) = 100;
	for (int i = 0; i < 3; i++)
		cout << v[i] << " ";
	cout << v.at(3) << " ";
	cout << endl;

	return 0;
}
