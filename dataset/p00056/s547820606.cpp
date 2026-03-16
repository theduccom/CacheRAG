#include <iostream>
#include <utility>
using namespace std;

int prime[50010];

int isprime(int n) {
  if (n <= 1) return 0;

  for (int i = 2; i*i <= n; ++i)
    if (n % i == 0) return 0;
  return 1;
}


int main()
{
  fill(prime, prime+50010, -1);
  for (int i = 0; i < 50010; ++i) {
    if (prime[i] == -1) {
      prime[i] = isprime(i);
      if (prime[i] == 1 && i < 225)
        for (int j = i*i; j < 50010; j *= i)
          prime[j] = 0;
    }
  }

  int n;
  while (cin >> n, n) {
    int count = 0;
    for (int i = 2; i <= n/2; ++i)
      if (prime[i] && prime[n - i]) count++;
    cout << count << endl;
  }
}