#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
	int n, i;
	string s;
	stringstream ss;

	getline(cin, s);
	ss.str(s);
	ss>>n;
	for (i = 0; i < n; i++) {
		getline(cin, s);
		while (s.find("Hoshino") != string::npos)
			s[s.find("Hoshino")+6] = 'a';
		cout<<s<<endl;
	}

	return 0;
}