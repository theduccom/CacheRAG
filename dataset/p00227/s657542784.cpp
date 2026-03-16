#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
  int n,m,fig[1001];
  while(cin >> n >> m,n||m){
    int ans = 0;
    for(int i=0;i<n;i++) cin >> fig[i];
    sort(fig,fig+n,greater<int>());
    for(int i=0;i<(n/m)*m;i++){
      if((i+1) % m) ans += fig[i];
    }
    for(int i=n-1,j=0;j<(n%m);i--,j++) ans += fig[i];
    fill(fig,fig+1001,0);
    cout << ans << endl;
  }
}