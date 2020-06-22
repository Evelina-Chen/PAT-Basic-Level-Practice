#include<iostream>
using namespace std;
int i = 0;
int odd(int n)
{
	i++;
	n = (3 * n + 1) / 2;
	return n;
}
int even(int n)
{
	i++;
	return n / 2;
}
int main()
{
	int n;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 1)
			n = odd(n);
		else
			n = even(n);
	}
	cout << i;
}
