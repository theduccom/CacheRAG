#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const int MX = 50001;
bool sieve[MX];

void prepare() {
    memset(sieve, false, sizeof sieve);
    sieve[0] = sieve[1] = true;
    for (int i=2; i*i<MX; ++i) {
        if ( ! sieve[i]) {
            for (int j=i*i; j<MX; j+=i) {
                sieve[j] = true;
            }
        }
    }
}

int main() {
    prepare();
    int n;
    while (cin >> n, n) {
        int cnt = 0;
        for (int i=1; i<=n-i; ++i) {
            if ( ! sieve[i] && ! sieve[n-i]) {
                cnt ++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}