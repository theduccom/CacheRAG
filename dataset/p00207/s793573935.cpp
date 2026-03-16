#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<ll>;
using vll = vector<vector<ll>>;
using pii = pair<int,int>;
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(obj) (obj).begin(), (obj).end()
#define pb push_back
const double PI = acos(-1);
const double EPS = 1e-10;
const ll MOD = 1000000007;
void cioacc(){//accelerate cin/cout
  cin.tie(0);
  ios::sync_with_stdio(false);
}
int main(){
  int di[] = {1,-1,0,0};
  int dj[] = {0,0,1,-1};
  int w,h;
  while(cin >> w >> h,w){
    vector<vector<int>> field(w+2,vector<int> (h+2,0));
    int sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;
    int n; cin >> n;
    REP(i,n){
      int c,d,x,y;
      cin >> c >> d >> x >> y;
      if(d==1){
        REP(j,2) REP(k,4) field[x+j][y+k] = c;
      }else{
        REP(j,4) REP(k,2) field[x+j][y+k] = c;
      }
    }
    bool flag = false;
    int color = field[sx][sy];
    queue<pair<int,int>> task;
    task.push(make_pair(sx,sy));
    while(color>0&&!task.empty()){
      pii u = task.front(); task.pop();
      if(u.first==gx && u.second==gy){
        flag = true;
        break;
      }
      REP(i,4){
        int ni = u.first + di[i];
        int nj = u.second + dj[i];
        if(field[ni][nj] == color){
          task.push(make_pair(ni,nj));
          field[ni][nj] = -1;
        }
      }
    }
    cout << (flag? "OK":"NG") << endl;
  }
}
