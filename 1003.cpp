#include<iostream>
using namespace std;
string str;
int len;
int fun0(int n)//�жϵ�n+1���ַ��Ƿ�ΪA 
{
	if(str[n+1]=='A')
	return 1;
	else
	return 0;
} 
int fun1(int n)//�ж��Ƿ�ΪP��A��T������ַ�
{
	if(str[n]!='P'&&str[n]!='T'&&str[n]!='A')
	return 0;
	else
	return 1;
}
int fun2(int n)//�ж��Ƿ�Ϊ����xPATx����xPA...ATx 
{
	int i=n;
	int f0=fun0(n);
	while(str[f0]==1)
	{
		f0=fun0(++i);
	}
	if(str[++i]=='T')
	return 1;
	else
	return 0;
}
int main()
{
	int b=0,n,f1,f2;
	cin>>n;
	while(n--)
	{
		cin>>str;
		len=str.length();
		for(int i=0;i<len;i++)
		{
			int f1=fun1(i); 
			if(f1==0)
			{
				b=0;
				break;
			}
			if(str[i]=='P')
				f2=fun2(i);
			if(f2==0)
			{
				b=0;
				break;
			}
			b++;
		}
		if(b==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		b=0;
	}
}
