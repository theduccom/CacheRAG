#include <iostream>
#include <bitset>

#define N_MAX 50001

using namespace std;

bitset<N_MAX> prime;

void make_cache() {
    prime.set();
    for (int i = 2; i < N_MAX; i++) {
        if (prime[i]) {
            for (int j = i + i; j < N_MAX; j += i) {
                prime.reset(j);
            }
        }
    }
}

int count_pattern(int n) {
    int count = 0;
    for (int i = 2; i <= n/2; i++) {
        if (prime[i] && prime[n-i]) count++;
    }
    return count;
}

int main() {
    make_cache();
    int n; 
    while (cin >> n, n!=0) {
        cout << count_pattern(n) << endl;
    }
    return 0;
}