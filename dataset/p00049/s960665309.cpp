#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main()
{
	int i;
	string s;
	char k;
	map<string, int> m;
	m["A"] = 0; m["B"] = 0;
	m["AB"] = 0; m["O"] = 0;
	while(cin>>i>>k>>s){
		m[s]++;
	}
	cout<<m["A"]<<endl;
	cout<<m["B"]<<endl;
	cout<<m["AB"]<<endl;
	cout<<m["O"]<<endl;
	
	return 0;
}