#include <iostream>
#include <set>
#include <map>
#include <iterator>
#include <string>

using namespace std;

int main()
{
#if 0
	set<int> s;
	s.insert(1);
	s.insert(132);
	s.insert(168);
	//s.insert(168);
	s.insert(20);

	//cout << s[0];//error!
	set<int>::const_iterator it;
	for(it=s.begin(); it!=s.end(); ++it)
		cout << *it << " ";
	cout << endl;

	int key;
	cout << "please enter one number to find:";
	cin >> key;

	set<int>::iterator result_it;
	result_it = s.find(key);
	if(result_it != s.end())
		cout << "ok! you find it in the set!" << endl;
	else
		cout << "no! you can't find it!" << endl;
#endif
	map<int, string> m;
	//m["zero"] = 0;
	m.insert(pair<int, string>(0, "z"));
	//mapping 做映射
	m[1] = "b";
//	m["two"] = 2;
	m[3] = "a";
	//m["zero"] = 0;
	//m.insert(pair<string,int>("zero",0));

//	cout << m["c"] << endl;
	//cout << m["four"] << endl;//equal to m["four"]=0;
//	cout <<"size="<< m.size() << endl;
	map<int, string>::iterator mapIt;
	mapIt = m.find("b");
	if(mapIt != m.end())
		cout << mapIt->second << endl;
	else
		cout << "can't find it!" << endl;
	cout << "===========" << endl;
	for(mapIt=m.begin(); mapIt!=m.end(); ++mapIt)
		//cout << *mapIt << " ";
		cout <<mapIt->first << "," << mapIt->second << endl;
	cout << endl;

	return 0;
}
