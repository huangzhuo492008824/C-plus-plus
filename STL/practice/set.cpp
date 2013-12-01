#include <set>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	list<int> s;
	
	s.insert(6);	
	s.insert(4);	
	s.insert(5);	

	set<int>::const_iterator it;
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;
}
