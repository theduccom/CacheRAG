#include <iostream>
#include <vector>
using namespace std;
#define sz(c) int((c).size())

vector<bool> primes(110000, true);

void build()
{
  primes[0] = false;
  primes[1] = false;
  for (int i = 2; 2*i < sz(primes); i++)
    primes[2*i] = false;
  for (int i = 3; i*i < sz(primes); i+=2) {
    if (primes[i]) {
      for (int j = 2; i*j < sz(primes); j++) {
        primes[i*j] = false;
      }
    }
  }
}

typedef long long ll;
ll SumOfPrimeNumbers(int n)
{
  if (n < 1)
    return 0;
  n--;
  ll res = 2;
  int i = 3;
  while (n) {
    if (primes[i]) {
      res += i;
      n--;
    }
    i++;
  }
  return res;
}

int main(int argc, char **argv)
{
  int n;
  build();
  while (cin >> n) {
    if (!n)
      break;
    cout << SumOfPrimeNumbers(n) << endl;
  }
  return 0;
}