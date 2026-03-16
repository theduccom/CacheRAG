#include<bits/stdc++.h>
#define endl '\n'
#define INF (1 << 21)
const int MOD = 1000000007;
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c;

  cin >> a >> b >> c;
  if(a == 1 && b == 1 && c == 0 || a == 0 && b == 0 && c == 1){
    cout << "Open" << endl;
  }else{
    cout << "Close" << endl;
  }
  return 0;
}


