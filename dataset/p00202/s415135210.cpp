#include <iostream>
#include <algorithm>
using namespace std;

bool budget[1000001], prime[1000001];

void eratosthenes() {
    fill(prime, prime+1000001, true);
    prime[0] = prime[1] = false;
    for (int i = 3; i <= 1000; i++) {
        if (prime[i]) {
            for (int d = i * 2, j = i + d; j <= 1000000; j += d) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    int n, x, price[30], i, j;

    eratosthenes();

    while ((cin >> n >> x) && n) {
        for (i = 0; i < n; i++) {
            cin >> price[i];
        }
        // sort(price, price+n);

        fill(budget, budget+x+1, false);
        budget[0] = true;
        for (i = 0; i <= x; i++) {
            if (budget[i]) {
                for (j = 0; j < n; j++) {
                    if (i + price[j] <= x) {
                        budget[i + price[j]] = true;
                    }
                }
            }
        }

        for (i = x - 1 + (x&1); i > 0; i -= 2) {
            if (prime[i] && budget[i]) break;
        }

        if (i > 0) {
            cout << i;
        }
        else {
            cout << "NA";
        }
        cout << endl;
    }
    return 0;
}