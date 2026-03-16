#include <iostream>
using namespace std;

int main() {
  int w;
  while(cin >> w) {
    int data[10];
    int p = 0;
    for(int i = 512; i > 0; i /= 2) {
      if(i <= w) {
	data[p++] = i;
	w -= i;
	if(w == 0) {
	  break;
	}
      }
    }
    for(p--; p >= 0; p--) {
      cout << data[p];
      if(p == 0) {
	cout << endl;
      } else {
	cout << ' ';
      }
    }
  }
  return 0;
}