#include<iostream>
using namespace std;

int main(){
int p[10000];
int j=3;
int a;
bool c;
p[0]=2;
for(int i=1;i<10000;i++){
for(;;j++){
c=true;
for(int k=2;k*k<=j;k++){
a=j;
a%=k;
if(a==0){c=false; break;}}
if(c){
p[i]=p[i-1]+j;
j++;
break;}
}}

int n;
while(cin>>n){
if(n==0)break;
cout<<p[n-1]<<endl;}}