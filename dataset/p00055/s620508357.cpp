#include<iostream>
#include<cstdio>
using namespace std;
int main(){
long i;
double a,s;
while(cin>>a){
s=a;
for(i=0;i<4;i++){a*=2;s+=a;a/=3;s+=a;}
a*=2;s+=a;
printf("%.6f\n",s);
}
return 0;
}