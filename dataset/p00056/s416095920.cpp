#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 50005;
bool isP[MAXN];

int main() {
  fill(isP, isP+MAXN, true);
  isP[0] = isP[1] = false;
  for(int i = 0; i < MAXN; ++i) {
    if(!isP[i]) continue;
    for(int j = i*2; j < MAXN; j += i) isP[j] = false;
  }
  int n;
  while(cin >> n && n) {
    int res = 0;
    for(int i = 2; i <= n-i; ++i) {
      if(isP[i] && isP[n-i]) {
        ++res;
      }
    }
    cout << res << endl;
  }
  return 0;
}