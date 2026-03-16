#include <iostream>
using namespace std;
int main(void) {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) return 0;
        int count2 = 0, count5 = 0;
        for (int i = 1; i <= n; i++) {
            int temp = i;
            while (temp % 2 == 0) {
                count2++;
                temp /= 2;
            }
            while (temp % 5 == 0) {
                count5++;
                temp /= 5;
            }
        }
        cout << min(count2, count5) << endl;
    }
}