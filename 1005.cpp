#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[101],flag=0;
	map<int, int> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		int b = a[i];
		while (b != 1)
		{
			if (b % 2 != 0)
				b = b * 3 + 1;
			b = b / 2;
			if (m[b] == 1)
				break;
			m[b] = 1;
		}
	}
	sort(a, a + n);
	reverse(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if (m[a[i]] != 1)
		{ 
			if (flag == 1)
				cout << " ";
			cout << a[i];
			flag = 1;
		}
	}
	return 0;
}
