#include <iostream>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

int n;

void solve() {
  int nums[10];
  rep(i,10) nums[i] = 0;
  
  rep(i,n) {
    int ii; cin>>ii;
    nums[ii]++;
  }
  
  rep(i,10) {
    if (nums[i]) rep(j,nums[i]) cout<<"*";
    else cout<<"-";
    cout<<endl;
  }
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}