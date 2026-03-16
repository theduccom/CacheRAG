#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  vector<int> v;
  int ans;

  while(1){
    cin >> n >> m; 
    if(!n && !m)break;

    ans = 0;
    v.resize(n);
    for(int i=0;i<n;i++){
      cin >> v[i];
      ans += v[i];
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-m;i>=0;i-=m){
      ans -= v[i];
    }

    cout << ans << endl;
  }
}