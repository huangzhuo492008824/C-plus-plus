#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	std::vector<int> v1;
	std::vector<int> v2;

	v1.push_back (8);
	v1.push_back (2);
	v2.push_back (8);
	v2.push_back (2);
	v2.push_back (3);
	std::cout << (v1 == v2) << endl;

	for (int i = 0; i < v2.size(); ++i)
		cout << v2.at(i) << " " << endl;
	reverse(v2.begin(), v2.end());
	for (int i = 0; i < v2.size(); ++i)
		cout << v2.at(i) << " " << endl;

	return 0;

}
