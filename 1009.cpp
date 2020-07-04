#include<iostream>
#include<string>
using namespace std;
string c[80];//句子长度不会超过80个单词
int main()
{
	int len,i=0;
	while (cin >> c[i])
		i++;//i的大小即为单词数
	for (i--; i > 0; i--)
	{
		cout << c[i]<<" ";
	}
	cout << c[0];
	return 0;
}


