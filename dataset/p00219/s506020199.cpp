#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int, int> P;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        int lis[10];
        fill(lis, lis+10, 0);
        rep(i, n) {
            int c;
            cin >> c;
            lis[c]++;
        }

        rep(i, 10) {
            if (lis[i] == 0) cout << '-';
            else rep(j, lis[i]) cout << '*';
            cout << endl;
        }
    }

    return 0;
}
