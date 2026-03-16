#include <bits/stdc++.h>

using namespace std;

#define all(c) ((c).begin()), ((c).end())
#define dump(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define REP(i, a, b) for (int i = a; i < (int)(b); i++)
#define rep(i, n) REP(i, 0, n)
#define mp make_pair
#define fst first
#define snd second
#define pb push_back

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef pair<int, int> pii;

const int INF = 1 << 29;
const double EPS = 1e-10;

double zero(double d) {
    return d < EPS ? 0.0 : d;
}

template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    return os << '(' << p.first << ',' << p.second << ')';
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &a) {
    os << '[';
    rep(i, a.size()) os << (i ? " " : "") << a[i];
    return os << ']';
}

// to avoid error on mingw
string toString(int i) {
    stringstream ss;
    ss << i;
    return ss.str();
}

const int M = 1000000007;

// a^k
ll fpow(ll a, ll k, int M) {
    ll res = 1ll;
    ll x = a;
    while (k != 0) {
        if ((k & 1) == 1)
            res = (res * x) % M;
        x = (x * x) % M;
        k >>= 1;
    }
    return res;
}

int dr[] = {0, 1, 0, -1};
int dc[] = {1, 0, -1, 0};

map<string, int> ans;

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(8);
    ios_base::sync_with_stdio(false);

    queue< pair<string, int> > que;
    que.push( mp("01234567", 0) );

    while (!que.empty()) {
        pair<string, int> t = que.front(); que.pop();
        int zero = t.first.find_first_of('0');

        ans[t.first] = t.second;

        rep(i, 4) {
            int nr = zero / 4 + dr[i];
            int nc = zero % 4 + dc[i];

            if (nr < 0 || 2 <= nr || nc < 0 || 4 <= nc)
                continue;

            swap(t.first[nr * 4 + nc], t.first[zero]);
            if( ans.find(t.first) == ans.end() )
                que.push(mp(t.first, t.second + 1));
            swap(t.first[nr * 4 + nc], t.first[zero]);
        }
    }

    int a[8];
    while (cin >> a[0]) {
        rep(i,7) cin >> a[i+1];
        stringstream ss;
        rep(i,8) ss << a[i];

        cout << ans[ss.str()] << endl;
    }

    return 0;
}