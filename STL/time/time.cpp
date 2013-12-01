#include <deque>
using namespace std;

#define NUM 100000

int main(void)
{
	deque<int> v;
	for (int i = 0; i < NUM; ++i)
		v.push_back(i);
	return 0;
}
