#include <deque>
using namespace std;
#define NUM 100000

int main(void)
{
	deque<int> v(10, 0);
	for (int i = 0; i < NUM; ++i)
		v.insert(v.begin()+5, i);
	return 0;
}
