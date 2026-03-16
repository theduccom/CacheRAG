#include<iostream>
#include<string>
#include<math.h>

using namespace std;

long long int solve(string s)
{
	for(int i=0;i<s.length();i++)
	{
		int min=i;
		for(int j=i;j<s.length();j++)
		{
			if(s[min]-'0'>s[j]-'0')
			{
				min=j;
			}
		}
		char tmp=s[i];
		s[i]=s[min];
		s[min]=tmp;
	}
	long long int min,max;
	min=max=0;
	for(int i=0;i<s.length();i++)
	{
		max+=(long long int)pow(10.0,i)*(s[i]-'0');
		min+=(long long int)pow(10.0,i)*(s[s.length()-i-1]-'0');
	}
	return max-min;
}

int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		cout<<solve(s)<<endl;;
	}
	return 0;
}