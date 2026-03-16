#include <iostream>
using namespace std;

int main() {
    int w, i;
    int b[] = {125, 140, 160};

    while (cin >> w) {
        if (w == -1) return 0;
        int diff = 4280 - 1150;
        w -= 10;
        for (i = 0; w > 10 && i < 2; w -= 10, i++) {
            diff -= 10 * b[i];
        }
        if (w > 0) diff -= w * b[i];
        cout << diff << endl;
    }
    return 0;
}