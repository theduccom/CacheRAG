#include <iostream>
#include <algorithm>
using namespace std;
int n,m,p[1000],ans;
int main(){
  while(1){
    ans=0;
    cin>>n>>m;
    if(n==0&&m==0) break;
    for(int i=0;i<n;i++)cin>>p[i];
    sort(p,p+n);
    for(int i=n-1;i>=0;i--)
      if((n-i)%m!=0)ans+=p[i];
    cout<<ans<<endl;
  }
  return 0;
}