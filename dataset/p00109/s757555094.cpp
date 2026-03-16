#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
typedef long long int ll;

#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define endl "\n"
const double EPS = 1e-7;
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
const double PI = acos(-1);
const int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

using State = string::const_iterator;
class ParseError {};

//-------------------------------------

int expr(State &);
int term(State &);
int number(State &);
int factor(State &);

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        State now = s.begin();
        int ans = expr(now);
        cout << ans << endl;
    }
}

int number(State &now) {
    int res = 0;
    while(isdigit(*now)) {
        res *= 10;
        res += *now - '0';
        now++;
    }
    return res;
}

int term(State &now) {
    int res = factor(now);
    while(1) {
        if(*now == '*') {
            now++;
            res *= factor(now);
        } else if(*now == '/') {
            now++;
            res /= factor(now);
        } else {
            break;
        }
    }
    return res;
}

int expr(State &now) {
    int res = term(now);
    while(1) {
        if(*now == '+') {
            now++;
            res += term(now);
        } else if(*now == '-') {
            now++;
            res -= term(now);
        } else {
            break;
        }
    }
    return res;
}

int factor(State &now) {
    if(*now == '(') {
        now++;
        int res = expr(now);
        now++;
        return res;
    } else {
        return number(now);
    }
}
