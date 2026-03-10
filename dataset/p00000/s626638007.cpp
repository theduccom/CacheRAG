#include <bits/stdc++.h>
#define SORT(a) sort(a.begin(), a.end())
#define RSORT(a) sort(a.rbegin(), a.rend())
#define REP(i, n) for (int i = 0; i < n; i++)
#define RREP(i, n) for (int i = n - 1; 0 <= i; i--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define RFOR(i, start, end) for (int i = start - 1; 0 <= i; i--)
#define ALL(a) a.begin(), a.end()
using ll = long long;
using namespace std;
constexpr int INF32       = 1'050'000'000;
constexpr long long INF64 = 4'000'000'000'000'000'000;
constexpr int MOD7        = 1'000'000'007;
constexpr int MOD9        = 1'000'000'009;
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
void print() { std::cout << '\n'; }
template <class H, class... T> void print(H &&head, T &&... args) {
    std::cout << head;
    sizeof...(args) == 0 ? std::cout << "" : std::cout << ' ';
    print(std::forward<T>(args)...);
}
template <class T> void print(std::vector<T> &v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        i == v.size() - 1 ? std::cout << '\n' : std::cout << ' ';
    }
}
template <class T> void print(std::vector<std::vector<T>> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            std::cout << v[i][j];
            j == v[i].size() - 1 ? std::cout << '\n' : std::cout << ' ';
        }
    }
}
void scan() {}
template <class H, class... T> void scan(H &&head, T &&... args) {
    std::cin >> head;
    scan(std::forward<T>(args)...);
}
template <class T> void scan(std::vector<T> &v) {
    for (auto &&i : v) {
        scan(i);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    REP(i, 9) {
        int x = i + 1;
        REP(j, 9) {
            int y = j + 1;
            cout << x << "x" << y << "=" << x * y << endl;
        }
    }

    return 0;
}
