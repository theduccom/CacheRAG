#include <bits/stdc++.h>
#define int long long
using namespace std;
bool e[1000001],dp[1001110];
main(){
  e[0]=e[1]=1;
  for(int i=2;i<1000001;i++)
    for(int j=i*2;j<1000001;j+=i)
      e[j]=1;
  int n,m;
  while(cin>>n>>m,n){
    for(int i=0;i<m+110;i++)dp[i]=0;
    int a[n],c=1,p;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
      for(int j=1;j<=m;j++){
        if(dp[j]&&a[i]+j<=m)dp[a[i]+j]=1;
        if(a[i]*j<=m)dp[a[i]*j]=1;}
    for(p=m;p>=0;p--)if(dp[p]&&!e[p]){c=0;break;}
    if(c)cout<<"NA"<<endl;
  else cout<<p<<endl;
  }
}