#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
long i,n;
char d;
double x[21],y[21],a,b,c,s;
for(i=0;i<20;i++){
cin>>x[i]>>d>>y[i];
if(cin.eof())break;
}
n=i;
for(s=0,i=0;i<n-1;i++){
a=sqrt((x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]));
b=sqrt((x[i+1]-x[0])*(x[i+1]-x[0])+(y[i+1]-y[0])*(y[i+1]-y[0]));
c=sqrt((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
s+=sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c))*0.25;
}
printf("%.6f\n",s);
return 0;
}