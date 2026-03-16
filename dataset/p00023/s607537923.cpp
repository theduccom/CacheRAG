#include<iostream>
#include<math.h>

using namespace std;

int intersection(double xa,double ya,double ra,double xb,double yb,double rb)
{
	double d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	if(ra+rb<d)
	{
		return 0;
	}
	else if(ra+d<rb)
	{
		return -2;
	}
	else if(rb+d<ra)
	{
		return 2;
	}
	else{
		return 1;
	}
}

int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		double xa,ya,ra,xb,yb,rb;
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		cout<<intersection(xa,ya,ra,xb,yb,rb)<<endl;
	}
}