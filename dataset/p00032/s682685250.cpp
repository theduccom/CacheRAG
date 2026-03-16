#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	int t=0, h=0;
	int a, b, c;
	string buf;
	while(cin>>buf){
		sscanf(buf.c_str(),"%d,%d,%d", &a, &b, &c);
		if(a==b) h++;
		if(a*a+b*b==c*c) t++;
	}
	cout<<t<<endl<<h<<endl;
	return 0;
}