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
        int a[n+1][n+1];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                a[i][n] += a[i][j];
                a[n][j] += a[i][j];
                a[n][n] += a[i][j];
            }
        }
        for (int i = 0; i < n+1; i++) {
            for (int j = 0; j < n+1; j++) {
                cout << right << setw(5) << a[i][j];
            }
            cout << endl;
        }
        cin >> n;
    } while (n != 0);
    return 0;
}