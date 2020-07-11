#include<iostream>
#include<cmath>
using namespace std;
int su(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int m, n, flag1 = 0, flag2 = 0, a = 0;;
	cin >> m >> n;
	for (int i = 2; a < n; i++)
	{
		if (su(i))
		{
			a++;
			if (a >= m)
			{
				if (flag1 == 1)
					cout << " ";
				cout << i;
				flag1 = 1;
				flag2++;
				if (flag2 == 10)
				{
					cout << endl;
					flag1 = 0;
					flag2 = 0;
				}
			}
		}
	}
	return 0;
}
