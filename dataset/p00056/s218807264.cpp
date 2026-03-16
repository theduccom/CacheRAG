#include<iostream>
#include<cmath>
using namespace std;
void pp(char* f, long x){
long i,p,k;
for(i=1;i<=x;i++)f[i]=0;
f[2]=f[3]=1;
for(i=7;i<=x;i+=6)f[i]=1;
for(i=5;i<=x;i+=6)f[i]=1;
for(i=0;i<=ceil(sqrt(x)/6);i++){
p=6*i+1;
if(f[p]){
for(k=p*p;k<=x;k+=p*6)f[k]=0;
for(k=p*(p+4);k<=x;k+=p*6)f[k]=0;
}
p=6*i+5;
if(f[p]){
for(k=p*p;k<=x;k+=p*6)f[k]=0;
for(k=p*(p+2);k<=x;k+=p*6)f[k]=0;
}
}
}
int main(){
long i,n,s;
char* f;
f=new char[50001];
pp(f,50000);
while(cin>>n,n){
s=0;
if(n==4){
s++;
}else if(n/2*2==n){
for(i=3;i*2<=n;i+=2)if(f[i]&&f[n-i])s++;
}else{
if(f[n-2])s++;
}
cout<<s<<endl;
}
return 0;
}