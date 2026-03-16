#include<iostream>
using namespace std;

int main(){
double a;
double s;
s=0;
a=1;
s+=a;
for(int i=0;i<5;i++){
a*=2;
s+=a;
if(i==4)break;
a/=3;
s+=a;}
while(cin>>a){
a*=s;
if(a<10)printf("%10.8f\n",a);
if(a>=10)printf("%11.8f\n",a);}
}