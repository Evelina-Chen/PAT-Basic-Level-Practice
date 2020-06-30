#include<iostream>
using namespace std;
int main()
{
	string num;
	cin >> num;
	int len = num.length();
	int a[3] = {0};
	for (int i = len-1,j=0; i >= 0; i--,j++)
		a[j] = int(num[i])-48;
	for (int i = 1; i <= a[2]; i++)
		cout << 'B';
	for (int i = 0; i < a[1]; i++)
		cout << 'S';
	for (int i = 1; i <= a[0]; i++)
		cout << i;
	return 0;
}
