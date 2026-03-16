#include<iostream>
using namespace std;
int main(){
long long n,a,b,c,f,i,j,k,s[4001],aa[4001];
while(cin>>n){
if(n==0)break;
for(i=0;i<n;i++){s[i]=0;aa[i]=0;}
for(i=0;i<n;i++){
cin>>a>>b>>c;
k=i;
for(j=0;j<i;j++)if(a==aa[j]){k=j;break;}
aa[i]=a;
for(j=0;j<c;j++){
if(s[k]>=1000000)break;
s[k]+=b;
}
}
for(f=0,i=0;i<n;i++)
if(s[i]>=1000000){cout<<aa[i]<<endl;f=1;}
if(f==0)cout<<"NA"<<endl;
}
return 0;
}