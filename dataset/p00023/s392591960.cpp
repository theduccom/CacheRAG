#include <iostream>
#include <cmath>

using namespace std;

double pa[2], pb[2];
double ra, rb;

int solve() {
  double dis = sqrt((pa[0] - pb[0]) * (pa[0] - pb[0])
                + (pa[1] - pb[1]) * (pa[1] - pb[1]));

  if (dis > ra + rb)
    return 0;
  else if (dis + ra < rb)
    return -2;
  else if (dis + rb < ra)
    return 2;
  else
    return 1;
}

int main() {
  int n;
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> pa[0] >> pa[1] >> ra >> pb[0] >> pb[1] >> rb;
    cout << solve() << endl;
  }
  return 0;
}