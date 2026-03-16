#define TEST_MODE true

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, n) for (int i = (n)-1; i >= 0; --i)
#define rrep2(i, a, b) for (int i = (a)-1; i >= b; --i)
#define range(i, a, b, c) for (int i = a;             \
                               c > 0 ? i < b : i > b; \
                               i += c)
#define chmax(a, b) (a = (a) < (b) ? (b) : (a))
#define chmin(a, b) (a = (a) > (b) ? (b) : (a))
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define all(a) begin(a), end(a)
#define ifnot(a) if (not(a))
#define int long long

#ifdef LOCAL_ENV

#if TEST_MODE == true
const bool test = true;
#define dump(x) cerr << #x << " = " << (x) << endl
#else
const bool test = false;
#define dump(x) 
#endif

#else
const bool test = false;
#define dump(x) 
#endif

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
const int INF = (int)1 << 60;
const ll INFL = (ll)1 << 60;
ll mod_n = (int)1e9 + 7;
const double eps = 1e-10;
typedef long double Real;
// return -1, 0, 1
int sgn(const Real &r) { return (r > eps) - (r < -eps); }
int sgn(const Real &a, const Real &b) { return sgn(a - b); }

//.....................
const int MAX = (int)2e5 + 5;

vector<string> split(const string &str, char sep)
{
    vector<string> v;
    stringstream ss(str);
    string buffer;
    while (getline(ss, buffer, sep))
    {
        v.push_back(buffer);
    }
    return v;
}

template <class InputIterator>
int sum(InputIterator begin, InputIterator end)
{
    return accumulate(begin, end, 0ll);
}

void solve();

signed main()
{
    cout << fixed << setprecision(20);
    solve();
    return 0;
}

// class Mycin {
// 	bool flag = true;
// public:
// 	Mycin& operator >> (int& a) {flag = scanf("%lld", &a) != EOF; return *this;}
// 	Mycin& operator >> (char& a) {flag = scanf("%c", &a) != EOF; return *this;}
// 	Mycin& operator >> (string& s) {flag = (bool)(cin >> s); return *this;}
// 	operator bool() {return flag;}
// } mycin;
 
// class Mycout {
// public:
// 	Mycout& operator << (const int& a) {printf("%lld", a); return *this;}
// 	Mycout& operator << (const char c) {printf("%c", c); return *this;}
// 	Mycout& operator << (const string& s) {printf("%s", s.c_str()); return *this;}
// } mycout;
 
// #define cin mycin
// #define cout mycout
// #define endl '\n'

int number(const string& s, int& i);
int factor(const string& s, int& i);
int term(const string& s, int& i);
int expr(const string& s, int& i);

int number(const string& s, int& i) {
    int res = 0;
    for (; isdigit(s[i]); i++) {
        res *= 10;
        res += s[i] - '0';
    }
    return res;
}

int factor(const string& s, int& i) {
    if (isdigit(s[i])) return number(s, i);
    i++;
    int res = expr(s, i);
    i++;
    return res;
}

int term(const string& s, int& i) {
    int res = factor(s, i);
    while (s[i] == '*' || s[i] == '/') {
        char op = s[i];
        i++;
        int a = factor(s, i);
        if (op == '*') res *= a;
        else           res /= a;
    }
    return res;
}

int expr(const string& s, int& i) {
    int res = term(s, i);
    while (s[i] == '+' || s[i] == '-') {
        char op = s[i];
        i++;
        int a = term(s, i);
        if (op == '+') res += a;
        else           res -= a;
    }
    return res;
}

int eval(const string& s) {
    int i = 0;
    return expr(s, i);
}

void solve() {
    int N;
    string s;
    cin >> N;
    rep(i, N) {
        cin >> s;
        cout << eval(s) << endl;
    }
}