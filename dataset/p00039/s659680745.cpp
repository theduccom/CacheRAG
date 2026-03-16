#include<iostream>
#include<map>
using namespace std;
map<char,int>M;
int a[100];
string s;
main()
{
	M['I']=1;M['V']=5;M['X']=10;M['L']=50;M['C']=100;M['D']=500;M['M']=1000;
	while(cin>>s)
	{
		for(int i=0;i<s.size();i++)a[i]=M[s[i]];
		for(int i=0;i+1<s.size();i++)if(a[i]<a[i+1])a[i]*=-1;
		int ans=0;
		for(int i=0;i<s.size();i++)ans+=a[i];
		cout<<ans<<endl;
	}
}
