#include <bits/stdc++.h>
using namespace std;
#define all(c) (c).begin(),(c).end()
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rrep(i,n) for(int i=(int)(n)-1; i>=0; i--)
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define iter(c) __typeof((c).begin())
#define tr(it,c) for(iter(c) it=(c).begin(); it!=(c).end(); it++)
#define pb(a) push_back(a)
#define pr(a) cout << (a) << endl
#define PR(a,b) cout << (a) << " " << (b) << endl
#define F first
#define S second
typedef long long ll;
typedef pair<int,int> P;
const int MAX=1000000001;
const ll MAXL=1000000000000000001LL;
const ll mod=1000000007;
int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

int main() {
  int n,m;
  while(cin >> n >> m && (n||m)) {
    vector<int> a(n);
    rep(i,n) {
      int x;
      cin >> x;
      a[i]=x;
    }
    sort(all(a),greater<int>());
    int ans=0;
    rep(i,n) {
      if((i+1)%m) ans+=a[i];
    }
    pr(ans);
  }
  return 0;
}
