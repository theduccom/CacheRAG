#include<string>
#include<iostream>

using namespace std;

int main()
{
	string s;	getline(cin,s);

	for(int i=0;i<s.length();i++){
		if     (s[i]=='a' && s.substr(i+1,4)=="pple")	s.replace(i,5,"peach");
		else if(s[i]=='p' && s.substr(i+1,4)=="each")	s.replace(i,5,"apple");
	}

	cout<<s<<endl;

	return 0;
}