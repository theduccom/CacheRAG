#include <iostream>

using namespace std;

int main() {
    char cur = 'A';
    char cup_a, cup_b, d;
    while (cin >> cup_a >> d >> cup_b) {
        if (cur == cup_a) {
            cur = cup_b;
        } else if (cur == cup_b) {
            cur = cup_a;
        }
    }
    cout << cur << endl;
    return 0;
}