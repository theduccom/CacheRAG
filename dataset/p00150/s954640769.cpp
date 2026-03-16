#include <bits/stdc++.h>
using namespace std;
bool prim[10001];

int main(void){
  int n;
  for(int i=0; i < 10001; i++){
    prim[i] = true;
  }
  for(int i=2; i < sqrt(10001); i++){
    if(prim[i]){
      for(int j=0; i*(j+2) < 10001; j++){
        prim[i * (j+2)] = false;
      }
    }
  }

  while(cin >> n, n){
    int cnt = 0;
    vector<int> ans;
    for(int i=n; i > 0; i--){
      if(prim[i]){
        ans.push_back(i);
        cnt++;
      }
      if(cnt == 2){
        if(ans[0] - ans[1] == 2){
          cout << ans[1] << " " << ans[0] << endl;
          break;
        }else{
          ans.erase(ans.begin());
          cnt = 0;
        }
      }
    }
  }
  return 0;
}