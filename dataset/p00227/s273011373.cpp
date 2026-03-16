#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
  int n,m;
  while(cin >> n >> m,m+n){
    vector<int> ps(n);
    for(int i = 0 ; i < n ; i ++){
      cin >> ps[i];
    }
    sort(ps.begin(),ps.end(),greater<int>());
    int ans = 0;
    for(int i = 0 ; i < n ; i ++){
      if((i+1)% m != 0){
        ans += ps[i];
      }
    }
    cout << ans << endl;
  }
}