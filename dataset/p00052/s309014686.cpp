#include<iostream>
using namespace std;

int s(int x){
int ans,y=x;
y%=5;
x=(x-y)/5;
if(x<5)ans=x;
if(x>=5)ans=s(x)+x;
return ans;}

int main(){
int n,ans;
while(cin>>n){
if(n==0){break;}
ans=s(n);
cout<<ans<<endl;}}