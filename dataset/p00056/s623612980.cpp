#include <iostream>
#include <vector>

using namespace std;

int table[50000];
vector<int> prime;

int main() {
    for (int i = 2; i < 50000; i++) {
        if (table[i] == 0) {
            prime.push_back(i);
            for (int j = i; j < 50000; j += i) {
                table[j] = 2;
            }
            table[i] = 1;
        }
    }
    int n, size = prime.size();
    while (cin >> n && n != 0) {
        int ans = 0, num1, num2;
        for (int i = 0; i < size; i++) {
            num1 = prime[i];
            num2 = n - num1;
            if (num2 <= 0) {
                break;
            }
            if (num1 <= num2 && table[num2] == 1) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}