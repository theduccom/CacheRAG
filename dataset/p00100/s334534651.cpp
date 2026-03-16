#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1000000000;
const ll LINF = (ll) 4000000000000000000;
const ll MOD = (ll) 1000000007;
const double PI = acos(1.0);
const int limit = 100010;

#define REP(i,m,n) for(ll i = m; i < (ll)(n); i++)
#define rep(i,n) REP(i, 0, n)
#define MP make_pair
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible") << endl
#define NP(v) next_permutation(v.begin(),v.end())
#define smaller_queue  priority_queue <ll, vector<ll>, greater<ll> >
//------------------------------------------------------

int main() {

    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;

        bool na = true;
        set<ll> st;
        map<ll, ll> mp;
        vector<ll> v;

        rep(k, n) {
            ll i, p, q;
            cin >> i >> p >> q;
            if (!st.count(i)) {
                v.push_back(i);
                st.insert(i);
            }
            mp[i] += p*q;
        }

        for (auto vi : v) {
            if (mp[vi] >= 1000000) {
                cout << vi << endl;
                na = false;
            }
        }

        if (na) cout << "NA" << endl;
    }

    return 0;
}

