#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
  double x[3],y[3],tx,ty,ans=0;
  int count=0;
  for(;~scanf("%lf,%lf",&tx,&ty);)
    {
      //      cout<<"line "<<count<<endl;
      if(count<3)
	{
	  x[count]=tx;
	  y[count]=ty;
	}
      else
	{
	  x[1]=x[2];
	  y[1]=y[2];
	  x[2]=tx;
	  y[2]=ty;
	}
      if(count>1)
	{
	  double a,b,c,z;
	  a=sqrt(pow(x[0]-x[1],2)+pow(y[0]-y[1],2));
	  b=sqrt(pow(x[1]-x[2],2)+pow(y[1]-y[2],2));
	  c=sqrt(pow(x[0]-x[2],2)+pow(y[0]-y[2],2));
	  z=(a+b+c)/2;
	  // cout<<a<<" "<<b<<" "<<c<<" "<<z<<endl;
	  ans+=sqrt(z*(z-a)*(z-b)*(z-c));
	}
      count++;
    }
  printf("%.6lf\n",ans);
}