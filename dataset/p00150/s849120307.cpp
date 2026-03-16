#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int MAX_N = 10101;

int prime[MAX_N];
bool is_prime[MAX_N + 1];

int sieve(int n) {
    int p = 0;
    for (int i = 0; i <= n; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            prime[p++] = i;
            for (int j = 2 * i; j <= n; j += i) is_prime[j] = false;
        }
    }
    return p;
}

int main() {
    sieve(MAX_N);
    sort(prime, prime + MAX_N);
    int n;
    while (cin >> n && n) {
        int p = 0, q = 0;
        int idx = upper_bound(prime, prime + MAX_N, n) - prime;
        idx--;
        for (int i = idx; i > 0; i--) {
            if (prime[i] - 2 == prime[i - 1]) {
                p = prime[i - 1];
                q = prime[i];
                break;
            }
        }
        cout << p << ' ' << q << endl;
    }
}
