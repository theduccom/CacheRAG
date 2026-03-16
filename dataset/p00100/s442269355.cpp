#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for( int i = 0; i < n; i++ )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000

int main(void)
{
    int n; cin >> n;
    do {
        int e[n], p[n], q[n];
        ll tmp[4010] = {};
        int Flag[4010] = {};
        int flag = 0;
        rep(i, n) cin >> e[i] >> p[i] >> q[i];
        for (int i = 0; i < n; i++) {
            tmp[e[i]] += p[i] * q[i];
        }
        for (int i = 0; i < n; i++) {
            if (tmp[e[i]] >= 1000000 && Flag[e[i]] == 0) {
                cout << e[i] << endl;
                flag = 1;
                Flag[e[i]]++;
            }
        }
        if (flag == 0) cout << "NA" << endl;
        cin >> n;
    } while(n != 0);

    return 0;
}