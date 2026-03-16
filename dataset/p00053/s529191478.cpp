#include<iostream>
using namespace std;
int main(){
long p[10000]={2,3,5,7,11,13,17,19,23},s,n,i,j=8;
while(cin>>n){
if(n==0)break;
while(n>j+1){
s=p[j];
for(;;){
s+=2;
for(i=1;p[i]*p[i]<=s;i++)if(s/p[i]*p[i]==s)break;
if(p[i]*p[i]>s){p[j+1]=s;break;}
}
j++;
}
for(s=i=0;i<n;i++)s+=p[i];
cout<<s<<endl;
}
return 0;
}