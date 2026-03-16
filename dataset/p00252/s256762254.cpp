#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(int (i) = (s);(i) <= (e);(i)++)

int b[3];

int main(){
  cin >> b[0] >> b[1] >> b[2];

  bool ans = (b[0] && b[1]) || (b[2]);

  if(ans){
    cout << "Open" << endl;
  }
  else{
    cout << "Close" << endl;
  }
}

