#include <iostream>
#include <vector>
using namespace std;

int solve_testcase() {
  int N; cin >> N;
  if(N == 0) return 1;

  vector<int> P(N), d1(N), d2(N);
  int max_val = -1, ans = -1;
  for(int i=0; i<N; i++) {
    cin >> P[i] >> d1[i] >> d2[i];
    if(d1[i] + d2[i] > max_val) {
      max_val = d1[i] + d2[i];
      ans = P[i];
    }
  }
  cout << ans << " " << max_val << endl;
  return 0;
}

int main() {
  while(!solve_testcase());
  return 0;
}

