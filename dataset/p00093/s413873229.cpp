#include <iostream>
using namespace std;

bool isLeapYear(int y) {
  if(!(y % 4)) {
    if(!(y % 100)) {
      if(!(y % 400)) return true;
      return false;
    }
    return true;
  }
  else return false;
}

int a[50], b[50];

int main() {
  int n = 0;
  bool flag;
  while(cin >> a[n] >> b[n]) {
    if(a[n] == 0 && b[n] == 0) break;
    n++;
  }

  for(int j = 0; j < n; ++j) {
    flag = 0;
    for(int i = a[j]; i <= b[j]; ++i) {
      if(isLeapYear(i)) {
        flag = 1;
        cout << i << endl;
      }
    }
    if(!flag) cout << "NA" << endl;
    if(j < n - 1) cout << endl;
  }
  return 0;
}