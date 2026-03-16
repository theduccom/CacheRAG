#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 50000;
bool isPrime[MAX_N + 1];

void setup() {
    fill_n(isPrime, MAX_N, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 4; i <= MAX_N; i += 2) {
        isPrime[i] = false;
    }
    for (int i = 3; i * i <= MAX_N; i += 2) {
        if (isPrime[i]) {
            for (int j = i + i; j <= MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    setup();
    int n;
    while (cin >> n, n) {
        int result = 0;
        if (isPrime[n - 2]) {
            result++;
        }
        for (int i = 3; i * 2 <= n; i += 2) {
            if (isPrime[i] && isPrime[n - i]) {
                result++;
            }
        }
        cout << result << endl;
    }
}