#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int MAX = 50100;
    bool isPrime[MAX];
    fill_n(isPrime, MAX, true);
    for (int i = 4; i < MAX; i += 2) {
        isPrime[i] = false;
    }
    for (int i = 3; i * i <= MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = 2 * i; j < MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int n;
    while (cin >> n) {
        for (int i = n - 1; ; i--) {
            if (isPrime[i]) {
                cout << i << " ";
                break;
            }
        }
        for (int i = n + 1; ; i++) {
            if (isPrime[i]) {
                cout << i << endl;
                break;
            }
        }
    }
}