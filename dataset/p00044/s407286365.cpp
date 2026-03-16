#include <iostream>

using namespace std;

bool prime_table[100000];
int n;

void make_table() {
    for (int i = 0; i < 100000; i++) 
        prime_table[i] = true;

    prime_table[0] = false;
    prime_table[1] = false;

    for (int i = 2; i + i < 100000; i++) {
        if (prime_table[i]) {
            for (int j = i + i; j < 100000; j += i) {
                prime_table[j] = false;
            }
        }
    }
}

void solve() {
    int i;
    for (i = n-1; !prime_table[i]; i--);

    int j;
    for (j = n+1; !prime_table[j]; j++);
    cout << i << ' ' << j << endl;
}

int main() {
    make_table();
    while (cin >> n) {
        solve();
    }
    return 0;
}