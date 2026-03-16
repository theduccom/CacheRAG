#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int n;
	char c;
	string bl;
	int a=0,b=0,ab=0,o=0;
	while(cin>>n>>c>>bl)
	{
		if(bl=="A") a++;
		else if(bl=="B") b++;
		else if(bl=="O") o++;
		else ab++;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<ab<<endl;
	cout<<o<<endl;
  return 0;
}