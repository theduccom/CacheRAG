#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<char> roman10 = {'I', 'X', 'C', 'M'};
  vector<char> roman5 = {'V', 'L', 'D'};
  vector<int> num10 = {1, 10, 100, 1000};
  vector<int> num5 = {5, 50, 500};

  string S;
  while(cin >> S){
    int ans = 0;

    for(int i=0; i<S.length(); i++){
      bool flag = false;
      for(int j=0; j<3; j++){
        if(S[i] == roman5[j]){
          ans += num5[j]; flag = true; break;
        }
      }
      if(flag) continue;

      for(int j=0; j<4; j++){
        if(S[i] == roman10[j]){
          if(j != 3 && S[i+1] == roman10[j+1]){
            ans += num10[j+1]-num10[j]; i++; break;
          } else if (j != 3 && S[i+1] == roman5[j]){
            ans += num5[j]-num10[j]; i++; break;
          } else {
            ans += num10[j]; break;
          }
        }
      }
    }

    cout << ans << endl;
  }
}
  
  
