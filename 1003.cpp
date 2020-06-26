#include<iostream>
#include<map>
using namespace std;
bool fun(string s,int len)//判断字符串是否有P、A、T以外的字符
{
	for(int i=0;i<len;i++)
	{
		if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
		return 0;//字符串中出现了非P、A、T的字符 
	}
	return 1;//字符串完全由P、A、T构成 
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		map<char,int> m;//记录每个字符出现的次数 
		int a,b,c,len;//a=P前A的数量，b=PT间A的数量，c=T后A的数量 
		cin>>s;
		len=s.length();
		if(!fun(s,len))//字符串中出现了非P、A、T的字符
		{cout<<"NO"<<endl;
		continue;}
		for(int i=0;i<len;i++)
		{
			m[s[i]]++;//s[i]的字符的数量+1 
			if(s[i]=='P')//由条件2可得，字符串中只能出现一个P，即P出现了就可以求得a的值 
			a=i;//a的值同样代表了P出现的数组标号 
			if(s[i]=='T')//由条件2可得，字符串中只能出现一个T，即T出现了就可以求得b,c的值
			{
				b=i-a-1;//i此时等于T出现的数组编号，a等于P出现的数组编号
				c=len-i-1; 
			} 
		}
		if(m['P']!=1||m['T']!=1)//P、T出现的次数不为1 
		{cout<<"NO"<<endl;
		continue;}
		if(c==a*b&&b>0)
		cout<<"YES"<<endl;
		else
		{cout<<"NO"<<endl;
		continue;}
	}
	return 0;
} 
