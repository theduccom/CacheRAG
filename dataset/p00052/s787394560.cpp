#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0)
            break;

        int result = 0;
        for (int i = 5; i <= n; i++) {
            if (i % 5 == 0) {
                int temp = i;
                while (temp % 5 == 0) {
                    temp /= 5;
                    result++;
                }
            }
        }
        cout << result << endl;
    }
}