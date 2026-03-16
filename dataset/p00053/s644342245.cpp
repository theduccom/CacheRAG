#include <iostream>
#include <bitset>

using namespace std;

#define PRIME_MAX 1000000

bitset<PRIME_MAX> is_prime;

void make_cache() {
    is_prime.set(), is_prime.reset(0), is_prime.reset(1);
    for (int i = 2; i < PRIME_MAX; i++) {
        if (is_prime[i]) {
            for (int j = i + i; j < PRIME_MAX; j+=i) {
                is_prime.reset(j);
            }
        }
    }
}

int solve(int n) {
    int count = 0;
    int sum = 0;
    for (int i = 2; i < PRIME_MAX; i++) {
        if (is_prime[i]) {
            sum += i;
            count++;
            if (count == n) break;
        }
    }
    return sum;
}

int main() {
    make_cache();
    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << solve(n) << endl;
    }
    return 0;
}