#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	while(1)
	{
		string s;
		cin>>s;
		if(cin.eof())break;
		char ans[900];
		int c=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='@')ans[c++]=s[i];
			else{
				i++;
				for(int j=0;j<s[i]-'0';j++)
				{
					ans[c++]=s[i+1];
				}
				i++;
			}
		}
		ans[c]='\0';
		cout<<ans<<endl;
	}
}