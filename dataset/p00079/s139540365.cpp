#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
   int n=0,i;
   double x[20],y[20],a,b,c,s=0,z;
   while(scanf("%lf,%lf",&x[n],&y[n])!=EOF) n++;
   for (i=1;i<n-1;i++) {
	   a=sqrt((x[0]-x[i])*(x[0]-x[i])+(y[0]-y[i])*(y[0]-y[i]));
	   b=sqrt((x[0]-x[i+1])*(x[0]-x[i+1])+(y[0]-y[i+1])*(y[0]-y[i+1]));
	   c=sqrt((x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1]));
	   z=(a+b+c)/2;
	   s+=sqrt(z*(z-a)*(z-b)*(z-c));
   }
   cout << s << endl;
   return 0;
}