#include <cstdio>
#include <vector>
using namespace std;

typedef long long int LLI;

int n;
bool is_composite[1000000];
LLI imos[1000000];
vector<LLI> primes;

int main() {
  for (int i=2; i<1000000; i++) {
    if (!is_composite[i]) {
      primes.push_back(i);
      for (int j=i+i; j<1000000; j+=i) is_composite[j] = true;
    }
  }

  for (int i=0; i<10000; i++) {
    imos[i+1] = imos[i] + primes[i];
  }

  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    printf("%lld\n", imos[n]);
  }
}