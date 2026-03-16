#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;cin.ignore();
	while(n--)
	{
		string a;
		getline(cin,a);
		for(int i=a.find("Hoshino");i!=string::npos;i=a.find("Hoshino"))
			a[i+6]='a';
		cout<<a<<endl;
	}
}