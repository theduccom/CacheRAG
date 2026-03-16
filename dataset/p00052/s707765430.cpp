#include <iostream>
using namespace std;

int num5(int x) {
  int ans = 0;
  while(1) {
    if(x % 5 == 0) {
      x /= 5;
      ans++;
    } else {
      return ans;
    }
  }
}
int num2(int x) {
  int ans = 0;
  while(1) {
    if(x % 2 == 0) {
      x /= 2;
      ans++;
    } else {
      return ans;
    }
  }
}

int main() {
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;

    int numof2 = 0, numof5 = 0;
    for(; n > 0; n--) {
      numof2 += num2(n);
      numof5 += num5(n);
    }
    cout << min(numof2, numof5) << endl;
  }
  return 0;
}