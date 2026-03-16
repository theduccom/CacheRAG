#include <iostream>
using namespace std;

int calc_fee(int w) {
    if (w <= 10) return 1150;
    if (10 < w && w <= 20) {
        return 1150 + (w - 10) * 125;
    } 
    if (20 < w && w <= 30) {
        return 1150 + 10 * 125 + (w - 20) * 140;
    }
    if (30 < w) {
        return 1150 + 10 * 125 + 10 * 140 + (w - 30) * 160;
    }
}

int main() {
    int n; int prev_fee = 4280;
    while (cin >> n, n != -1) {
        cout << - (calc_fee(n) - prev_fee) << endl;
    }
    return 0;
} 