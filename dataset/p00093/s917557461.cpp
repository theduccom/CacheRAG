#include<iostream>
using namespace std;

bool is_leap(int y) {
  if(y % 400 == 0) {
    return true;
  }else if(y % 100 == 0) {
    return false;
  }else if(y % 4 == 0) {
    return true;
  }

  return false;
}

int main() {
  int a, b;
  int cnt = 0;
  while(cin >> a >> b ) {
    if(a == 0 && b == 0) {
      break;
    }
    if(cnt) {
      cout << endl;
    }
    cnt++;

    bool flg = false;
    for(int i = a; i <= b; i++) {
      if(is_leap(i)) {
        cout << i << endl;

        flg = true;
      }
    }
    if(!flg) {
      cout << "NA" << endl;
    }
  }

  return 0;
}