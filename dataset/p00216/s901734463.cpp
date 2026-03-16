#include<bits/stdc++.h>
using namespace std;

int main()
{
  int w;
  int ans;

  while(1){
    cin >> w;
    if(w == -1) break;

    ans = 0;
    if(w > 30){
      ans += (w - 30) * 160;
      w = 30;
    }
    if(w > 20){
      ans += (w - 20) * 140;
      w = 20;
    }
    if(w > 10){
      ans += (w - 10) * 125;
      w = 10;
    }
    ans += 1150;

    cout << 4280 - ans << endl;
  }

  return 0;
}

