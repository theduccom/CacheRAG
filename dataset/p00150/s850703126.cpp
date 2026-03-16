#include <iostream>
#include <bitset>
using namespace std;

#define N_MAX 10001

bitset<N_MAX> primes;

void make_cache() {
    primes.set();
    for (int i = 2; i < N_MAX; i++) {
        if (primes[i]) {
            for (int j = i + i; j < N_MAX; j+=i) {
                primes.reset(j);
            }
        }
    }
}

void solve(int n) {
    for (int i = n; 4 <= i; i--) {
        if (primes[i] && primes[i-2]) {
            cout << i-2 << ' ' << i << endl;
            break;
        }
    }
}

int main() {
    make_cache();
    int n;
    while (cin >> n) {
        if (n == 0) break;
        solve(n);
    }
    return 0;
}