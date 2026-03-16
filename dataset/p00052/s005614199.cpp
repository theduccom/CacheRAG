#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int temp = i;
            while (temp % 5 == 0) {
                temp /= 5;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}