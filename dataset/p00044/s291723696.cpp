#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

const int MAX_N = 50100;
vector<bool> primes(MAX_N, false);

void build()
{
  primes[2] = true;
  for (int i = 3; i*i <= MAX_N; i += 2) {
    if (primes[i]) {
      for (int j = 2; i*j < MAX_N; j++) {
        primes[i*j] = false;
      }
    }
  }
}

int lessthan(int n)
{
  for (int i = n - 1; i > 0; i--) {
    if (primes[i])
      return i;
  }
  return 2;
}

int morethan(int n)
{
  for (int i = n + 1; i < MAX_N; i++) {
    if (primes[i])
      return i;
  }
  return 50021;
}

int main(int argc, char **argv)
{
  for (int i = 3; i < MAX_N; i += 2) {
    primes[i] = true;
  }
  build();
  int n;
  while (cin >> n) {
    cout << lessthan(n) << " " << morethan(n) << endl;
  }

  return 0;
}