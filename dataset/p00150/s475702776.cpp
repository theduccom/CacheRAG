#include <iostream>
using namespace std;
int main() {
    int tbl[10001];
    fill(tbl, tbl+10001, 1);
    for (int i=2; i<10001; ++i) {
        for (int j=i*2; j<10001; j+=i) {
            tbl[j] = 0;
        }
    }

    int n;
    while (cin >> n && n != 0) {
        for (int i=n; i>=5; --i) {
            if (tbl[i] && tbl[i-2]) {
                cout << i-2 << " " << i << endl;
                break;
            }
        }
    }
    return 0;
}