#include <fstream>
using namespace std;

int main(void)
{
	ofstream examplefile("example.txt", ios::out | ios::out);
	if (examplefile.is_open()){
		examplefile << "This is a line.\n";
		examplefile << "This is another line.\n";
		examplefile.close();
	}
	
	return 0;
}

