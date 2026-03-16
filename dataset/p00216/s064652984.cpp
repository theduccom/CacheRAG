#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
using ll = long long;

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const ll INF=1e9;
const ll MOD=1e9+7;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int w;
int p = 4280;

void solve() {
    int sum = 0;
    sum += 1150;
    sum += max(0, min(10, w - 10)) * 125;
    sum += max(0, min(10, w - 20)) * 140;
    sum += max(0, w - 30) * 160;

    cout << 4280 - sum << endl;
}

int main() {
    while(cin>>w) {
        if(w == -1) break;
        solve();
    }
    return 0;
}