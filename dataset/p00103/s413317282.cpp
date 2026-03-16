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
    int out, hit, point;
    for (int i = 0; i < n; i++) {
        string tmp;
        out = 0;
        hit = 0;
        point = 0;
        while (out < 3) {
            cin >> tmp;
            if (tmp == "HIT") {
                hit++;
            } else if ( tmp == "OUT") {
                out++;
            } else if ( tmp == "HOMERUN") {
                point += hit + 1;
                hit = 0;
            }
            if( hit > 3 ) {
                hit--;
                point++;
            }
        }
        cout << point << endl;
    }

    return 0;
}