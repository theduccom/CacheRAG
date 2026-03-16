// ?????¬???????????¬??????

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

map< vector<int>, int > mp;

void init(vector<int> vs) {
    queue< vector<int> > que;
    que.push(vs);

    while(!que.empty()) {
        vector<int> cur = que.front(); que.pop();
        
        int idx = -1;
        rep(i,0,8) {
            if(cur[i] == 0) {
                idx = i;
                break;
            }
        }

        rep(k,0,4) {
            int nx = (idx / 4) + dx[k];
            int ny = (idx % 4) + dy[k];
            if(nx < 0 || nx >= 2 || ny < 0 || ny >= 4) continue;
            int nc = nx * 4 + ny;
            vector<int> tmp = cur;
            swap(tmp[nc], tmp[idx]);
            if(mp.count(tmp)) continue;
            mp[tmp] = mp[cur] + 1;
            que.push(tmp);
        }
    }
}

signed main() {
    vector<int> v(8);
    iota(v.begin(), v.end(), 0);
    mp[v] = 0;
    init(v);

    string s;
    while(getline(cin, s)) {
        stringstream ss(s);
        vector<int> vs;
        int val;
        while(ss >> val) vs.push_back(val);

        cout << mp[vs] << endl;
    }
    return 0;
}