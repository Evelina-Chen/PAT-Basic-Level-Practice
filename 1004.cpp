#include<iostream>
using namespace std;
int main()
{
	int n, maxscores,minscores,scores;
	string maxname, maxid, minname, minid,name,id;
	cin >> n;
	cin >> name >> id >> scores;
	maxname = minname = name;
	maxid = minid = id;
	maxscores = minscores = scores;
	n--;
	while (n--)
	{
		
		cin >> name >> id >> scores;
		if (scores > maxscores)
		{
			maxname = name;
			maxid = id;
			maxscores = scores;
		}
		if (scores < minscores)
		{
			minname = name;
			minid = id;
			minscores = scores;
		}
	}
	cout << maxname << " " << maxid << endl;
	cout << minname << " " << minid << endl;
	return 0;
}
