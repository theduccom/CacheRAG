#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int i,j,n,m,a[1000],ans;
  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    for(i=0;i<n;i++) cin >> a[i];

    sort(a,a+n);
    ans = 0;
    j = 1;
    for(i=n-1;i>=0;i--){
      if(j == m) j = 0;
      else ans += a[i];
      j++;
    }
    cout << ans << endl;

  }
  return 0;
}