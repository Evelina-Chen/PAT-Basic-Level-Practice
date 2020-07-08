#include<iostream>
using namespace std;
int main()
{
	long long int a, b, c, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		a + b > c ? cout << "Case #" << i << ": true" << endl : cout << "Case #" << i << ": false" << endl;
	}
	return 0;
}
