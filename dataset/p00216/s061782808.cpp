#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int, int> P;

int main() {
    while (true) {
        int w; cin >> w;
        if (w == -1) return 0;

        int cost = 1150;
        if (10 < w && w <= 20) cost += 125*(w-10);
        if (20 < w && w <= 30) cost += 1250+140*(w-20);
        if (30 < w) cost += 2650+160*(w-30);

        int ans = 4280-cost;
        cout << ans << endl;
    }

    return 0;
}
