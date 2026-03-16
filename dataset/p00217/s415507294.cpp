#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;
int N;
map<int,int> data;

void solve() {
    data.clear();
    rep(i,N) {
        int a,b,c;
        cin>>a>>b>>c;
        data[b+c]=a;
    }

    auto it = data.end();
    --it;

    cout<<it->sc<<" "<<it->fr<<endl;



}
int main() {
    while(cin>>N) {
        if(!N) break;
        solve();
    }
    return 0;
}