#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

int main()
{
    while(true)
    {
        vector<string> field(12);
        
        rep(h, 12)
            cin >> field[h];
        if(cin.eof()) break;
        
        int res = 0;
        rep(h, 12) rep(w, 12) if(field[h][w] - '0')
        {
            res++;
            queue<pint> que;
            for(que.push(mp(h, w)); !que.empty(); que.pop())
            {
                pint p = que.front();
                int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
                rep(i, 4)
                {
                    int nx = p.second + dx[i], ny = p.first + dy[i];
                    if(0 <= nx && nx < 12 && 0 <= ny && ny < 12 && field[ny][nx] - '0')
                    {
                        field[ny][nx] = '0';
                        que.push(mp(ny, nx));
                    }
                }
            }
        }
        cout << res << endl;
    }
}