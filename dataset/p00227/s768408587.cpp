#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  while(cin >> n >> m, n || m){
    int p[1001];
    for(int i = 0; i < n; i++) cin >> p[i];
    sort(p, p + n, greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++){
      if((i+1)%m == 0) continue;
      ans += p[i];
    }
    cout << ans << endl;
  }
  return 0;
}