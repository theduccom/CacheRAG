#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int ice[10];
        for (int i = 0; i < 10; i++) {
            ice[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            int p; cin >> p;
            ice[p]++;
        }
        for (int i = 0; i < 10; i++) {
            if (ice[i] == 0) {
                cout << '-'; 
            }
            for (int j = 0; j < ice[i]; j++) {
                cout << '*';
            }
            cout << endl;
        }
    }
    return 0;
}