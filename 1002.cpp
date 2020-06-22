#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	int l1, num,l2;
	cin >> n;
	l1 = n.length();
	for (int i = 0; i < l1; i++)
		num += (int)n[i] - 48;
	string N = to_string(num);
	l2 = N.length();
	for (int i = 0; i < l2; i++)
	{
		switch (N[i])
		{
		case '0':cout << "ling"; break;
		case '1':cout << "yi"; break;
		case '2':cout << "er"; break;
		case '3':cout << "san"; break;
		case '4':cout << "si"; break;
		case '5':cout << "wu"; break;
		case '6':cout << "liu"; break;
		case '7':cout << "qi"; break;
		case '8':cout << "ba"; break;
		case '9':cout << "jiu"; break;
		}
		if (i!=l2-1)
			cout << " ";
	}
	return 0;
}
