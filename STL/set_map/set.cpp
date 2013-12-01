#include <iostream>
#include <set>
#include <map>
#include <iterator>
#include <string>

using namespace std;

int main(void)
{
	set<int> s;
	s.insert(1);
	s.insert(132);
	s.insert(168);
	s.insert(20);

	set<int>::const_iterator it;
	for(it=s.begin(); it != s.end(); ++it)
		cout << *it << " ";
	cout << endl;
	
	return 0;
}
