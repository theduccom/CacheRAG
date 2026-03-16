#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define COUNT(i, n) for(int i = 1; i <= n; i ++)
#define ITER(c) __typeof((c).begin())
#define each(c, it) for(ITER(c) it =(c).begin(); it!=(c).end(); it++)
#define ALL(c) c.begin(), c.end()
#define mp make_pair
#define pb push_back
#define MEMSET(v, h) memset((v), h, sizeof(v))
 
using namespace std; 

typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;
const int N = 8;

int main(void){
    for(vs t(N);;){
        int l = N, r = 0, u = N, d = 0;
        rep(i, N){
            if(!(cin >> t[i])) return 0;
            
            rep(j, N) if(t[i][j] == '1')
                l = min(l, j), r = max(r, j), 
                u = min(u, i), d = max(d, i);
        }
        int w = r - l + 1, h = d - u + 1;

        cout << (w == 4 ? 'C':h == 4 ? 'B':w == 2 ? h == 2 ? 'A': t[u][l] == '1' ? 'F':'D': t[u][l] == '1' ? 'E':'G') << endl;
    }
 
    return 0;
}