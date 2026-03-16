#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int, int> P;

int main() {
    while (true) {
        int n; cin >> n;
        if (n == 0) return 0;

        P ans = make_pair(0, 0);
        int p[10000], d1[10000], d2[10000];
        rep(i, n) {
            cin >> p[i] >> d1[i] >> d2[i];
            if (ans.second < d1[i]+d2[i]) ans.first = p[i], ans.second = d1[i]+d2[i];
        }
        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}
