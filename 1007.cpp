#include<iostream>
#include<cmath>
using namespace std;

bool su(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n,m=0;
		cin >> n;
		for (int i = 3; i + 2 <= n; i++)
		{
			if (su(i) && su(i + 2))
				m++;
		}
		cout << m<<endl;

}
