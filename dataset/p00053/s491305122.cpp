#include <iostream>
#include <complex>
#include <cmath>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

const int primemax = 500000;
bool prime[primemax];

void init() {
    for (int i = 0; i < primemax; i++) {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < primemax; i++) {
        if (prime[i]) {
            for (int j = i * 2; j < primemax; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    init();
    int n;
    while(1) {
        cin >> n;
        if (n == 0)break;
        int res = 0;
        int i = 2;
        while (n > 0) {
            if (prime[i]) {
                n--;
                res += i;
            }
            i++;
        }
        cout << res << endl;
    }
    return 0;
}