#include<iostream>
#include<cstdio>
#include<cmath> 
#include<cstring>
using namespace std;

int main()
{
	double v;
	while(cin>>v)
	{
		double h=v*v/(2*9.8);
		int n=ceil((double)(h+5)/5);
		if(h==0)
		  cout<<"0"<<endl;
		else
		  cout<<n<<endl;
	} 
 return 0;
} 