#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int i, a[5] = {1, 2, 3, 4, 5};
	vector<int> v(5);
	cout << v.end() - v.begin() << endl;
	for (i = 0; i < v.size(); i++)
		v[i] = i;
	vector<int> v2(a, a+5);
//	v2.insert(v2.end(), 13);
	v2.push_back(13);
	for (i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;
	
	return 0;
}
