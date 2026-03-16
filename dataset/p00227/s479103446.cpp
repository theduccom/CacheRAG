#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,m,ans,a,nk,count;
  while(cin>>n>>m){
    if(n==0&&m==0) break;
    int p[n];
    nk = n;
    count = 0;
    for(int i=0;i<n;i++) cin >> p[i];
    sort(p,p+n,greater<int>());
    ans = 0;
    a = 0;
    while(nk>=m){
      for(int i=a;i<(a+m)-1;i++) ans += p[i];
      a += m;
      nk -= m;
      count += m;
    }
    if(n>count){
      for(int i=count;i<n;i++) ans += p[i];
    }     
    cout << ans << endl;
  }
  return 0;
}