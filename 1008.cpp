#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m,a[100];
	cin >> n >> m;
	m = m % n;
	for (int i = 0; i < n; i++)
	{
		if (n - m - i > 0)
			cin >> a[i+m];
		else
			cin >> a[i-n+m];
	}
	for (int i = 0; i < n-1; i++)
		cout << a[i]<<" ";
	cout << a[n - 1];
}
