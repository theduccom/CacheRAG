#include<iostream>
using namespace std;
bool sosuu(int x){
bool c=true;
int a;
for(int j=2;j*j<=x;j++){
a=x;
a%=j;
if(a==0){c=false; break;}}
if(c)return true;
else return false;}

int main(){
int n;
while(cin>>n){
for(int i=n-1;i>1;i--){
if(sosuu(i)){cout<<i<<" "; break;}}
while(1){
n++;
if(sosuu(n)){cout<<n<<endl; break;}}}}