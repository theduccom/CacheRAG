#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        bool first = true;
        for (int i=1; i<=512; i<<=1) {
            if (n & i) {
                cout << (first ? "" : " ") << i;
                first = false;
            }
        }
        cout << endl;
    }
    return 0;
}