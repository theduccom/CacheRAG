#include <iostream>
using namespace std;

int pow(int x, int n) {
  int ans = 1;
  for(int i = 0; i < n; i++) {
    ans *= x;
  }
  return ans;
}

int main() {
  while(1) {
    int dat[3];
    cin >> dat[0] >> dat[1] >> dat[2];
    if(dat[0] == 0 && dat[1] == 0 && dat[2] == 0) break;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
      int r;
      cin >> r;

      bool flag = false;
      for(int j = 0; j < 3; j++) {
	if(pow(dat[j], 2)+pow(dat[(j+1)%3], 2) < pow(r*2, 2)) {
	  flag = true;
	  break;
	}
      }
      if(flag) {
	cout << "OK" << endl;
      } else {
	cout << "NA" << endl;
      }
    }
  }
  return 0;
}