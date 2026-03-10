#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i, c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORTASC(c) sort((c).begin(), (c).end())
#define SORTDESC(c, t) sort((c).begin(), (c).end(), std::greater<t>());
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define dump(x) cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
                      << " " << __FILE__ << endl;

const double PI = acos(-1.0);

using ll = long long;
using namespace std;

int main()
{
    FOR(i, 1, 10){
        FOR(j, 1, 10){
            cout << i << "x" << j << "=" << i*j << endl;
        }
    }

    return 0;
}
