#include<iostream>
#include<map>
using namespace std;
bool fun(string s,int len)//�ж��ַ����Ƿ���P��A��T������ַ�
{
	for(int i=0;i<len;i++)
	{
		if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
		return 0;//�ַ����г����˷�P��A��T���ַ� 
	}
	return 1;//�ַ�����ȫ��P��A��T���� 
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		map<char,int> m;//��¼ÿ���ַ����ֵĴ��� 
		int a,b,c,len;//a=PǰA��������b=PT��A��������c=T��A������ 
		cin>>s;
		len=s.length();
		if(!fun(s,len))//�ַ����г����˷�P��A��T���ַ�
		{cout<<"NO"<<endl;
		continue;}
		for(int i=0;i<len;i++)
		{
			m[s[i]]++;//s[i]���ַ�������+1 
			if(s[i]=='P')//������2�ɵã��ַ�����ֻ�ܳ���һ��P����P�����˾Ϳ������a��ֵ 
			a=i;//a��ֵͬ��������P���ֵ������� 
			if(s[i]=='T')//������2�ɵã��ַ�����ֻ�ܳ���һ��T����T�����˾Ϳ������b,c��ֵ
			{
				b=i-a-1;//i��ʱ����T���ֵ������ţ�a����P���ֵ�������
				c=len-i-1; 
			} 
		}
		if(m['P']!=1||m['T']!=1)//P��T���ֵĴ�����Ϊ1 
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
