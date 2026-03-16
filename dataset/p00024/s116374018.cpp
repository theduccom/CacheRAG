#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    double v;
    while (cin >> v) {
        int N = 0;
        for ( ; ; ++N) {
            int y = 5 * N - 5;
            if (v * v * 10 <= 196 * y) break;
        }
        cout << N << endl;
    }
    return 0;
}