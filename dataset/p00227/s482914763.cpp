#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  while(cin >> n >> m, n, m){
    int pn[1000];
    for(int i = 0; i < n; i++) cin >> pn[i];
    sort(pn, pn+n);
    int nowm = 0, ans = 0;
    for(int i = n-1; i >= 0; i--){
      nowm++;
      if(nowm == m) nowm = 0;
      else{
	ans += pn[i];
      }
    }
    cout << ans << endl;
  }
}