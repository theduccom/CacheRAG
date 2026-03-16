#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int five = 0;
        for (int i=1; i<=n; ++i) {
            int t = i;
            while (t % 5 == 0) {
                five ++;
                t /= 5;
            }
        }
        cout << five << endl;
    }
    return 0;
}