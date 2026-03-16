#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

const int MX = 1000001;
int n, x;
bool tbl[MX], sieve[MX];
int v[30];

void makeSieve() {
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
    makeSieve();
    while (cin >> n >> x, n) {
        for (int i=0; i<n; ++i) {
            cin >> v[i];
        }
        memset(tbl, false, sizeof tbl);
        tbl[0] = true;
        for (int i=0; i<n; ++i) {
            for (int j=v[i]; j<=x; ++j) {
                tbl[j] |= tbl[j-v[i]];
            }
        }
        bool ok = false;
        for (int i=x; i>=0; --i) {
            if (tbl[i] && ! sieve[i]) {
                cout << i << endl;
                ok = true;
                break;
            }
        }
        if ( ! ok) {
            cout << "NA" << endl;
        }
    }
    return 0;
}