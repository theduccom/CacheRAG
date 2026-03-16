#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for(int i=a; i<n; i++)
#define repr(i,a,n) for(int i=a; i>=n; i--)
#define pb(a) push_back(a)
#define fr first
#define sc second
#define INF 999999999

#define X real()
#define Y imag()
#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) ( EQ((a).X, (b).X) && EQ((a).Y, (b).Y) )
#define LE(n, m) ((n) < (m) + EPS)
#define GE(n, m) ((n) + EPS > (m))

typedef vector<int> VI;
typedef vector<VI> MAT;
typedef pair<int, int> pii;
typedef long long int ll;

typedef complex<double> P;
typedef pair<P, P> L;
typedef pair<P, double> C;

int const MOD = 1000000007;
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};

int main() {
    int a[10][10];
    memset(a, 0, sizeof(a));
    int x,y,s;
    while(scanf("%d,%d,%d", &x, &y, &s) != EOF) {
        a[x][y]++;
        // if(x == 0 && y == 0 && s == 0) break;
        if(s == 1) {
            if(x + 1 <= 9) a[x + 1][y]++;
            if(x - 1 >= 0) a[x - 1][y]++;
            if(y + 1 <= 9) a[x][y + 1]++;
            if(y - 1 >= 0) a[x][y - 1]++;
        }
        else if(s == 2) {
            rep(i,0,8) {
                if(x + dx[i] < 0) continue;
                else if(x + dx[i] > 9) continue;
                else if(y + dy[i] < 0) continue;
                else if(y + dy[i] > 9) continue;
                else a[x + dx[i]][y + dy[i]]++;
            }
        }
        else {
            rep(i,0,8) {
                if(x + dx[i] < 0) continue;
                else if(x + dx[i] > 9) continue;
                else if(y + dy[i] < 0) continue;
                else if(y + dy[i] > 9) continue;
                else a[x + dx[i]][y + dy[i]]++;
            }
            if(x + 2 <= 9) a[x + 2][y]++;
            if(x - 2 >= 0) a[x - 2][y]++;
            if(y + 2 <= 9) a[x][y + 2]++;
            if(y - 2 >= 0) a[x][y - 2]++;
        }
    }

    int m_point = 0;
    int max_num = 0;
    rep(i,0,10) rep(j,0,10) {
        if(a[i][j] == 0) m_point++;
        max_num = max(max_num, a[i][j]);
    }
    cout << m_point << endl;
    cout << max_num << endl;

    return 0;
}