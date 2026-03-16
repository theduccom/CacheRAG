#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a, b, c;
    char dm;
    int rectangles = 0, lozenges = 0;
    while (cin >> a >> dm >> b >> dm >> c) {
        if (a * a + b * b == c * c) {
            rectangles ++;
        } else if (a == b) {
            lozenges ++;
        }
    }
    cout << rectangles << endl;
    cout << lozenges << endl;
    return 0;
}