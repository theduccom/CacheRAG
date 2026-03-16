#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long lli;

const int MAXP = 200000;
bool isP[MAXP];
vector<lli> Prime;

int main() {
  fill(isP, isP+MAXP, true);
  isP[0] = isP[1] = false;
  for(int i = 2; i < MAXP; ++i) {
    if(!isP[i]) continue;
    Prime.push_back(i);
    for(int j = i*2; j < MAXP; j += i) {
      isP[j] = false;
    }
  }
  for(int i = 1; i < Prime.size(); ++i) {
    Prime[i] += Prime[i-1];
  }
  int n;
  while(cin >> n && n) {
    cout << Prime[n-1] << endl;
  }
  return 0;
}