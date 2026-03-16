#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    bool sieve[10001] = {};
    sieve[0] = sieve[1] = true;
    for (int i=2; i*i<10001; ++i) {
        if ( ! sieve[i]) {
            for (int j=i*i; j<10001; j+=i) {
                sieve[j] = true;
            }
        }
    }
    int n;
    while (cin >> n, n) {
        for (int i=n; i>=5; --i) {
            if ( ! sieve[i-2] && ! sieve[i]) {
                cout << i-2 << " " << i << endl;
                break;
            }
        }
    }
    return 0;
}