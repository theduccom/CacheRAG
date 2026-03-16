#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool sym(string s)
{
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[s.length()-1-i])return false;
	}
	return true;
}

int main(void)
{
	vector<string> s;
	while(1)
	{
		string t;
		cin>>t;
		if(cin.eof())break;
		s.push_back(t);
	}
	int ans=0;
	for(int i=0;i<s.size();i++)
	{
		if(sym(s[i]))ans++;
	}
	cout<<ans<<endl;
}