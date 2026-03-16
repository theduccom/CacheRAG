#include <iostream>
using namespace std;

int calc(int n) {
    int i = 0;
    while (n >= 5) {
        i += n / 5;
        n /= 5;
    }
    return i;
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << calc(n) << endl;
    }
    return 0;
}