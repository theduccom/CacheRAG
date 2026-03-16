#include <iostream>
using namespace std;

int main() {
  while(1) {
    int w;
    cin >> w;
    int cost = 0;
    if(w == -1) break;
    cost += 1150;
    int temp;
    if(w > 30) {
      temp = w - 30;
      cost += temp * 160;
      w -= temp;
    }
    if(w > 20) {
      temp = w - 20;
      cost += temp * 140;
      w -= temp;
    }
    if(w > 10) {
      temp = w - 10;
      cost += temp * 125;
      w -= temp;
    }

    cout << 4280 - cost << endl;
  }
  return 0;
}