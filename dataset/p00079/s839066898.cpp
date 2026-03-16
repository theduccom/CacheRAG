#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    double x[20],y[20];
    int n=0;
    char t;
    while(cin>>x[n]>>t>>y[n])
    {
        n++;
    }
    double s=0;
    double a,b,c,z;
    for(int i=1;i<n-1;i++)
    {
        a = sqrt((x[0]-x[i])*(x[0]-x[i])+(y[0]-y[i])*(y[0]-y[i]));
        b = sqrt((x[0]-x[i+1])*(x[0]-x[i+1])+(y[0]-y[i+1])*(y[0]-y[i+1]));
        c = sqrt((x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1]));
        z = (a+b+c)/2;
        s+= sqrt(z*(z-a)*(z-b)*(z-c));
    }
    printf("%.6f\n",s);
    return 0;
}