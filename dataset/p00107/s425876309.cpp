#include <iostream>
#include <cmath>
using namespace std;

double minDiagonal(int a, int b, int c) {
    if (a >= b && a >= c) {
        return sqrt(b * b + c * c);
    } else if (b >= a && b >= c) {
        return sqrt(a * a + c * c);
    } else {
        return sqrt(a * a + b * b);
    }
}

int main() {
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        double diagonal = minDiagonal(a, b, c);
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int radius;
            cin >> radius;
            if (diagonal < radius * 2) {
                cout << "OK" << endl;
            } else {
                cout << "NA" << endl;
            }
        }
    }
}