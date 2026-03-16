#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
int p[1001];

int main(void) {
  int N, M;
  unsigned long long sum;
  while(cin >> N >> M, N != 0 && M != 0) {
    sum = 0;
    for(int i = 0 ; i < N ; i++) cin >> p[i];
    sort(p, p+N, greater<int>());
    for(int i = M-1 ; i < N ; i+=M) p[i] = 0;
    for(int i = 0 ; i < N ; i++) sum += p[i];
  
    cout << sum << endl;
  }
  return 0;
}