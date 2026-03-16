#include <bits/stdc++.h>
#define SORT(a) sort(a.begin(), a.end())
#define RSORT(a) sort(a.rbegin(), a.rend())
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(a) a.begin(), a.end()
#define MOD(a) a %= 1'000'000'007
using ll = long long;
using namespace std;
const int INF32       = 1'050'000'000;
const long long INF64 = 4'000'000'000'000'000'000;
const int MOD7        = 1'000'000'007;
const int MOD9        = 1'000'000'009;
template <class T> inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T> inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template <class T> T roma_to_arabic(string s) {
    auto number = [](char c) -> int {
        if (c == 'I')
            return 1;
        if (c == 'V')
            return 5;
        if (c == 'X')
            return 10;
        if (c == 'L')
            return 50;
        if (c == 'C')
            return 100;
        if (c == 'D')
            return 500;
        if (c == 'M')
            return 1000;
    };
    T ans   = number(s[0]);
    int pre = number(s[0]);
    for (int i = 1; i < s.size(); i++) {
        int now = number(s[i]);
        now <= pre ? ans += now : ans += now - 2 * pre;
        pre = now;
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    while (getline(cin, s)) {
        std::cout << roma_to_arabic<int>(s) << '\n';
    }

    return 0;
}
