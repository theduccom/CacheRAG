#include <iostream>
using namespace std;

int main() {
  int w, last = 4280;

  while(cin >> w, w != -1) {
    int ans = 1150;
    while(w != 0) {
      if(w > 30) {
	ans += 160 * (w-30);
	w = 30;
      }
      else if(w > 20) {
	ans += 140 * (w-20);
	w = 20;
      }
      else if(w > 10) {
	ans += 125 * (w-10);
	w = 10;
      }
      else w = 0;   
    }
    cout << last - ans << endl;
  }
}