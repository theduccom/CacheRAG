#include<iostream>

using namespace std;

int main() {
  int n;
  while(cin >> n) {
    if(n == 0) {
      break;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
      int j = i;
      while(j % 5 == 0) {
        ans++;
        j = j / 5;
      }
    }

    cout << ans << endl;
  }

  return 0;
}