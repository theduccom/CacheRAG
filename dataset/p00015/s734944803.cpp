#include<iostream>
#include<algorithm>
using namespace std;
int n;
int main()
{
	cin>>n;
	for(;n--;)
	{
		string s,t,u="";cin>>s>>t;
		if(s.size()<t.size())swap(s,t);
		int a=0;
		for(int i=0;i<s.size();i++)
		{
			a+=s[s.size()-i-1]-48;
			if(i<t.size())a+=t[t.size()-i-1]-48;
			u+=a%10+48;
			a/=10;
		}
		if(a)u+=a+48;
		if(u.size()>80)
		{
			cout<<"overflow"<<endl;
		}
		else
		{
			for(int i=u.size();i--;)cout<<u[i];
			cout<<endl;
		}
	}
}

