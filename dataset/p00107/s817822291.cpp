#include<iostream>
#include<cmath>
using namespace std;
int main(){
long a,b,c,n,x,i;
while(cin>>a){
cin>>b>>c>>n;
if(a==0)break;
if(a>=b&&a>=c)x=b*b+c*c;
else if(b>=a&&b>=c)x=a*a+c*c;
else x=a*a+b*b;
for(i=0;i<n;i++){
cin>>a;
if(a*a*4>x)cout<<"OK"<<endl;
else cout<<"NA"<<endl;
}
}
return 0;
}