#include<iostream>
#include<string>
using namespace std;
string c[80];//���ӳ��Ȳ��ᳬ��80������
int main()
{
	int len,i=0;
	while (cin >> c[i])
		i++;//i�Ĵ�С��Ϊ������
	for (i--; i > 0; i--)
	{
		cout << c[i]<<" ";
	}
	cout << c[0];
	return 0;
}


