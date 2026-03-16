#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)
#define ALL(c)   (c).begin(),(c).end()
#define pb push_back
main(){
  int n,m;
  while(cin>>n>>m && n){
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    sort(ALL(a));reverse(ALL(a));
    int ans=0;
    int cnt=1;
    rep(i,n){
      if (cnt == m){
	cnt=0;
      }
      else ans+=a[i];
      cnt++;
    }
    cout << ans << endl;
  }
  return false;
}