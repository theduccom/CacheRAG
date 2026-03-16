#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

const int MAX_N = 10002;
int n;
bool used[MAX_N];
vector<int> primes;

int main() {
  int twins[MAX_N];
  int twins_size = 0;
  fill(used, used + MAX_N, true);
  for (int i = 2; i < MAX_N; ++i) {
    if (used[i]) {
      primes.push_back(i);
      for (int j = i+i; j < MAX_N; j+=i) used[j] = false;
    }
  }
  for (int i = 1; i < primes.size(); ++i) {
    if (primes[i] - primes[i-1] == 2) {
      twins[twins_size] = primes[i];
      twins_size++;
    }
  }
  // int *a = lower_bound(twins, twins + twins_size, 11);
  // a--;
  // cout << *a << endl;
  while (cin >> n, n) {
    if (binary_search(twins, twins + twins_size, n)) {
      cout << n-2 << " " << n << endl;
    } else {
      int *a = lower_bound(twins, twins + twins_size, n);
      a--;
      cout << *a - 2 << " " << *a << endl;
    }
  }
  return 0;
}