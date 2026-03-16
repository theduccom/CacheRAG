#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

const int MX = 10000000;
bool sieve[MX];

int main() {
    memset(sieve, false, sizeof sieve);
    sieve[0] = sieve[1] = true;
    for (int i=2; i*i<MX; ++i) {
        if ( ! sieve[i]) {
            for (int j=i*i; j<MX; j+=i) {
                sieve[j] = true;
            }
        }
    }
    int n;
    while (cin >> n) {
        int l, h;
        for (int i=n-1; ; --i) {
            if ( ! sieve[i]) {
                l = i; break;
            }
        }
        for (int i=n+1; ; ++i) {
            if ( ! sieve[i]) {
                h = i; break;
            }
        }
        cout << l << " " << h << endl;
    }
    return 0;
}