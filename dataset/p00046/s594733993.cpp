#include <iostream>
using namespace std;

int main() {
    double input, min = -1, max = -1;
    while (cin >> input) {
        if (min == -1 || max == -1) {
            min = input;
            max = input;
        }
        if (max < input) {
            max = input;
        } else if (input < min) {
            min = input;
        }
    }
    cout << max - min << endl;
}