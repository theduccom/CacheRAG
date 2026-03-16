#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;

  while(cin >> n >> m, n){
    vector<int> a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    
    sort(a.begin(),a.end(),greater<int>());
    
    int ans = 0;
    for(int i=0;i<n;i++){
      if((i+1)%m)ans += a[i];
    }
    cout << ans << endl;
  }
}