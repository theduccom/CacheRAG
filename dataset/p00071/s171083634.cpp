#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define COUNT(i, n) for(int i = 1; i <= n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back
#define ITER(c) __typeof((c).begin())
#define each(c, it) for(ITER(c) it = (c).begin(); it != (c).end(); it++)
#define X first
#define Y second

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;
const int N = 8;

char m[N + 1][N + 1];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void dfs(pii);

int main(void){
    int n, cnt = 0; cin >> n;

    while(n--){
        rep(i, N) cin >> m[i];
        pii p; cin >> p.X >> p.Y;
    
        dfs(mp(p.X - 1, p.Y - 1));

        cout << "Data " << ++cnt << ":" << endl;
        rep(y, N) cout << m[y] << endl;
    }

    return 0;
}

void dfs(pii cur){
    m[cur.Y][cur.X] = '0';   

    rep(i, 4) COUNT(j, 3){
        pii next = mp(cur.X + dx[i] * j, cur.Y + dy[i] * j);
        if(next.X < 0 || N <= next.X ||
           next.Y < 0 || N <= next.Y) continue;

        if(m[next.Y][next.X] == '1'){
            dfs(next);
        }
    }
}