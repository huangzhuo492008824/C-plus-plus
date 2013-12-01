#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

//ios::trunc和ios::app是互斥的，不能同时出现
//ios::ate可以和ios::trunc在一起出现,这里的ios::ate其实是和ios::in配合，表示到文件末尾去读数据
//ios::ate和ios::app类似，都是在文件结尾操作，但是ios::app是针对写，而ios::ate针对读写都有效。另外ios::ate在文件不存在时不会创建文件，而ios::app会创建新文件。
//ios::app只影响写，不影响读；ios::ate则读写都影响。
int main()
{
	char buf[100];

	fstream file;
	//file.open("test.txt", ios::in | ios::app);//ios::app不影响读，打开后还是从文件最开头读起
	file.open("test.txt", ios::in | ios::ate); //ios::ate表示从文件结尾读，所以读得0个字节
	if(!file.is_open())
	{
		cerr << "file open error!" << endl;
		exit(1);
	}
	
	//对文件的操作
	file.read(buf, 100); //把数据从文件对象file中读到buf里，最大读100个字节
	int n = file.gcount(); //返回实际读了多少字节
	buf[n] = '\0';
	cout << "buf=" << buf << ", n=" << n << endl;

	file.close();

	return 0;
}
