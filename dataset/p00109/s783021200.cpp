#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vl;
typedef pair<ll, ll> PP;
#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define all(v) v.begin(), v.end()
#define inputv(v, n)                                                           \
    vl v;                                                                      \
    rep(i, n) {                                                                \
        ll x;                                                                  \
        cin >> x;                                                              \
        v.push_back(x);                                                        \
    }
bool chmin(ll& a, ll  b) { if (b < a) { a = b; return 1; } return 0; }
bool chmax(ll& a, ll b) { if (b > a) { a = b; return 1; } return 0; }
const ll INF = 999999999999999;
const ll MOD = 1000000007;
const ll MAX_N = 500010;
ll a, b, c, d, e, f, p, t, x, y, z, q, m, n, r, h, k, w, l, ans;
typedef string::const_iterator State;
int expression(State& begin);
int factor(State& begin);
// 乗算除算の式をパースして、その評価結果を返す。
int term(State& begin);
// 数字の列をパースして、その数を返す。
int number(State& begin);
int number(State& begin) {
    int ret = 0;

    while (isdigit(*begin)) {
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }

    return ret;
}
int factor(State& begin) {
    if (*begin == '(') {
        begin++; // '('を飛ばす。
        int ret = expression(begin);
        begin++; // ')'を飛ばす。
        return ret;
    }
    else {
        return number(begin);
    }
}
int term(State& begin) {
    int ret = factor(begin);

    for (;;) {
        if (*begin == '*') {
            begin++;
            ret *= factor(begin);
        }
        else if (*begin == '/') {
            begin++;
            ret /= factor(begin);
        }
        else {
            break;
        }
    }

    return ret;
}
int expression(State& begin) {
    int ret = term(begin);

    for (;;) {
        if (*begin == '+') {
            begin++;
            ret += term(begin);
        }
        else if (*begin == '-') {
            begin++;
            ret -= term(begin);
        }
        else{
            break;
        }
        
    }

    return ret;
}
int main() {
	cin>>n;
	rep(i,n){
    string S;
    cin >> S;
    S=S.substr(0,S.length()-1);
    State s=S.begin();
    cout << expression(s) << endl;
	}
}
