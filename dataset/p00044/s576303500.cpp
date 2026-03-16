#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool is_composite[100001];
vector<int> primes;

int main() {
  for (int i=2; i<=100000; i++) {
    if (!is_composite[i]) {
      primes.push_back(i);
      for (int j=i+i; j<=100000; j+=i) is_composite[j] = true;
    }
  }

  while (1) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    auto itr1 = lower_bound(primes.begin(), primes.end(), n)-1;
    auto itr2 = upper_bound(primes.begin(), primes.end(), n);
    printf("%d %d\n", *itr1, *itr2);
  }
}