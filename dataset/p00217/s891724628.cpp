#include<iostream>
using namespace std;
int main(){
long n,i,x,y,p,d1,d2;
while(cin>>n){
if(n==0)break;
for(x=i=0;i<n;i++){
cin>>p>>d1>>d2;
if(x<d1+d2){x=d1+d2;y=p;}
}
cout<<y<<" "<<x<<endl;
}
return 0;
}