#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

bool sieve[1000001];
bool dp[1000001];

int main() {
    sieve[0] = sieve[1] = true;
    FOR(i, 2, 1000001) {
        if (sieve[i]) continue;
        for (int j = i + i; j < 1000001; j += i) {
            sieve[j] = true;
        }
    }

    int n, money;
    while (cin >> n >> money, n|money) {
        fill_n((bool *)dp, 1000001, false);
        dp[0] = true;
        REP(i, n) {
            int food;
            cin >> food;
            REP(j, money-food+1) {
                if (dp[j]) dp[j+food] = true;
            }
        }
        for (int i = money; i >= 0; i--) {
            if (!sieve[i] && dp[i]) {
                cout << i << endl;
                goto END;
            }
        }
        cout << "NA" << endl;
END: {}
    }
}