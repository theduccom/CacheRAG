#include<iostream>
#include<string>
using namespace std;
int main(){
long n,p;
for(;;){
cin>>n;
if(n==-1)break;
p=1150;n-=10;
if(n>0)p+=125*n;n-=10;
if(n>0)p+=15*n;n-=10;
if(n>0)p+=20*n;
cout<<4280-p<<endl;
}
return 0;
}