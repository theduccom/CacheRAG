#include <iostream>
using namespace std;

int main() {
  int p, n;
  int sumP = 0;
  int sumN = 0;
  int kind = 0;
  while(scanf("%d,%d", &p, &n) != EOF) {
    sumP += p*n;
    sumN += n;
    kind++;
  }
  cout << sumP << endl;
  cout << (int)((double)sumN/kind+0.5) << endl;
  return 0;
}