#include<iostream>
using namespace std;
int main(){
long n,i,j,p[10001];
while(cin>>n){
if(n==0)break;
p[1]=0;
for(i=2;i<=n;i++)p[i]=1;
for(j=4;j<n;j+=2)p[j]=0;
for(i=3;i<=n;i+=2){
if(p[i]==1){
for(j=i*i;j<=n;j+=i)p[j]=0;
}
}
for(i=n;i>=4;i--)if(p[i]==1&&p[i-2]==1)break;
cout<<i-2<<" "<<i<<endl;
}
return 0;
}