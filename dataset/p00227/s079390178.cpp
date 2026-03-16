#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
long n,m,i,p[10000],s;
while(cin>>n>>m){
if(n==0)break;
for(i=0;i<n;i++)cin>>p[i];
sort(p,p+n,greater<long>());
for(s=i=0;i<n;i++)if(i%m!=m-1)s+=p[i];
cout<<s<<endl;
}
return 0;
}