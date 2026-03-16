#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n;
bool is_composite[1000001];
vector<int> primes;

int main() {
  for (int i=2; i<=1000000; i++) {
    if (!is_composite[i]) {
      primes.push_back(i);
      for (int j=i+i; j<=1000000; j+=i) is_composite[j] = true;
    }
  }


  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;
  
    int ans = 0;
    for (int i=0; i<primes.size(); i++) {
      if (primes[i] > n) break;
      if (primes[i]+primes[i] == n) ans += 2;
      else if (binary_search(primes.begin(), primes.end(), n-primes[i])) {
        ++ans;
      }
    }
  
    ans /= 2;
    printf("%d\n", ans);
  }
}