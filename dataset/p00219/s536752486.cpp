#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int sales[10] = {};
        for (int i = 0; i < n; i++) {
            int ice;
            cin >> ice;
            sales[ice]++;
        }
        for (int i = 0; i < 10; i++) {
            if (sales[i] == 0) {
                cout << "-";
            } else {
                for (int j = 0; j < sales[i]; j++) {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}