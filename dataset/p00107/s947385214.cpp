#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int n;
	double  a,x,y,z,r,i,j,rad;
	
	for(;;)
	{
		cin >> x >> y >> z;
		if(x==0 && y==0 && z==0)
			break;
		cin >> n;
		x/=2;
		y/=2;
		z/=2;
		if(x>y)
		{
			a=x;
			x=y;
			y=a;
		}
		if(x>z)
		{
			a=x;
			x=z;
			z=a;
		}
		if(y>z)
		{
			a=y;
			y=z;
			z=a;
		}
		if(x<y)
		{
			a=x;
			x=y;
			y=a;
		}
		for(i=0;i<n;i++)
		{
			cin >> r;
			if(sqrt(x*x+y*y)<r)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}
}