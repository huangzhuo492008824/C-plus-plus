#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

class ID {
	friend bool operator < (const ID&, const ID&);
public:
	ID(string name, int score):name(name), score(score){}
	void display()
	{
		cout.setf(ios::left);
		cout << setw(3) << score << name << endl;
	}
private:
	string name;
	int score;
};

bool operator < (const ID& a, const ID& b)
{
	return a.score < b.score;
}

typedef vector<ID> Vector;

int main(void)
{
	Vector v;	
	Vector::iterator iter;
	v.push_back(ID("Smith", 96));
	v.push_back(ID("Amstrong", 91));
	v.push_back(ID("Watson", 82));

	for (iter = v.begin(); iter != v.end(); iter++)
		iter->display();
	sort(v.begin(), v.end());

	cout << endl << "sorted by score" << endl;
	cout << "==================="<< endl;
	
	for (iter=v.begin(); iter!=v.end(); iter++)
		iter->display();
	cout << endl << "==================="<< endl;
	Vector::reverse_iterator r = v.rbegin();
	while (r != v.rend()) {
		r->display();
		r++;
	}
	cout << endl;	
	
	return 0;
}
