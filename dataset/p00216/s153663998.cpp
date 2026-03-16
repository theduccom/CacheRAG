#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
  int v = 4280;
  int w, sum, ans;
  while(cin >> w, w != -1) {
    sum = 0;
    if(w < 10) sum += 1150;
    if(10 <= w && w < 20) {
      sum += 1150;
      sum += (w % 10) * 125;
    }
    if(20 <= w && w < 30) {
      sum += 2400;
      sum += (w % 10) * 140;
    }
    if(30 <= w) {
      sum += 3800;
      sum += (w - 30) * 160;
    }
    ans = v - sum;
    cout << ans << endl;
  }
  return 0;
}