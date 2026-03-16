#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n;cin>>n;
	for(;n--;)
	{
		double a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		double A=a,B=b;
		double lx1,lx2,ly1,ly2;
		lx1=(a+c)/2;
		ly1=(b+d)/2;
		if(b!=d)
		{
			lx2=lx1+1;
			ly2=ly1-((c-a)/(d-b));
		}
		else
		{
			lx2=lx1;
			ly2=ly1+1;
		}
		double lx3,lx4,ly3,ly4;
		lx3=(a+e)/2;
		ly3=(b+f)/2;
		if(b!=f)
		{
			lx4=lx3+1;
			ly4=ly3-((e-a)/(f-b));
		}
		else
		{
			lx4=lx3;
			ly4=ly3+1;
		}
		double g,h;
		a=lx1,b=ly1,c=lx2,d=ly2,e=lx3,f=ly3,g=lx4,h=ly4;
		double x,y;
		x=((f*g-e*h)*(c-a)-(b*c-a*d)*(g-e))/((d-b)*(g-e)-(c-a)*(h-f));
		y=((f*g-e*h)*(d-b)-(b*c-a*d)*(h-f))/((d-b)*(g-e)-(c-a)*(h-f));
		cout<<fixed<<setprecision(3)<<x<<" "<<y<<" "<<hypot(A-x,B-y)<<endl;
	}
}
