#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#define pb push_back
#define len(i,j) sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))
using namespace std;
int main(){
vector<double>in,a,b;
double c,d,sum=0;
char x;
for(int i=0;i<2;i++){
cin>>c>>x>>d;
a.pb(c);
b.pb(d);
}
in.pb(len(1,0));
for(int i=2;scanf("%lf,%lf",&c,&d)!=EOF;i++){
double e;
a.pb(c);
b.pb(d);
in.pb(len(i,0));
e=len(i,i-1);
double z=(e+in[i-2]+in[i-1])/2;
sum+=sqrt(z*(z-e)*(z-in[i-2])*(z-in[i-1]));
}
cout<<sum<<endl;
}