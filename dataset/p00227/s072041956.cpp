#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)

int main(){
  while(1){
    int n,m;
    cin>>n>>m;
    if(n==0&& m==0) break;
    int a[1000];
    lp(i,n){
      cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    int ans=0;
    lp(i,n){
      if((i+1)%m==0) continue;
      else ans+=a[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}

