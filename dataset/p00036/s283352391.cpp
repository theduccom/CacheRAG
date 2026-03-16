#include<iostream>
using namespace std;
int main(){
long i,n,n2,f;
while(cin>>n){
i=2;
while(n==0){cin>>n;i++;}
if(i==9)f=2;
else{
cin>>n2;
if(n2==0)f=2;
else if(n2==n){if(n%11==0)f=0;else f=1;}
else if(n2==n*11)f=3;
else if(n2==n/10)f=4;
else if(n2==n*10)f=6;
else f=5;
for(;i<8;i++)cin>>n;
}
cout<<"ABCDEFG"[f]<<endl;
}
return 0;
}