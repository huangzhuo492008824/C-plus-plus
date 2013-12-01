#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

class ID
{
public:
	friend bool operator < (const ID&, const ID&);
	ID(string name, int score) : name(name), score(score) {}
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
	Vector::iterator Iter;
	v.push_back(ID("Smith A", 96));
	v.push_back(ID("Amstrong B", 91));
	v.push_back(ID("Watson D", 82));
	
	for (Iter = v.begin(); Iter != v.end(); Iter++)
		Iter->display();
	sort(v.begin(), v.end());
	cout << endl << "Sorted by Score" << endl;
	cout << "=========" << endl;
	for (Iter = v.begin(); Iter != v.end(); Iter++)
		Iter->display();
	
	cout << endl << "Reverse output" << endl;
	cout << "=======" << endl;
	
	Vector::reverse_iterator r = v.rbegin();
	while (r !=v.rend()) {
		r->display();
		r++;
	}
	cout << endl;
		
	return 0;
}
