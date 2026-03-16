#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    const int numPrimes = 10005;
    bool primes[numPrimes];
    for (int i = 2; i != numPrimes; ++i) {
        primes[i] = true;
    }

    for (int i = 2; i != int(sqrt(numPrimes)); ++i) {
        if (primes[i]) {        
            for (int j = 2; i * j < numPrimes; ++j) {
                primes[i*j] = false;
            }
        }
    }

    int n;
    while (cin >> n && n != 0) {
        for (int i = n; i - 2 >= 0; --i) {
            if (primes[i] && primes[i-2]) {
                cout << i-2 << " " << i << endl;
                break;
            }
        }

    }
    return 0;
}