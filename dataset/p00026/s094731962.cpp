#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef complex<double> P;
typedef pair<int,int> pii;
#define REP(i,n) for(ll i=0;i<n;++i)
#define REPR(i,n) for(ll i=1;i<n;++i)
#define FOR(i,a,b) for(ll i=a;i<b;++i)

#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define DEBUG_VEC(v) cout<<#v<<":";REP(i,v.size())cout<<" "<<v[i];cout<<endl
#define ALL(a) (a).begin(),(a).end()

#define MOD (ll)(1e9+7)
#define ADD(a,b) a=((a)+(b))%MOD
#define FIX(a) ((a)%MOD+MOD)%MOD

map< int,map<int,int> > mp;
// int mp[10][10];

int main(){
  int x,y,s;
  REP(i,10)REP(j,10)mp[i][j]=0;
  while(~scanf("%d,%d,%d",&x,&y,&s)){
    if(x<0)break;
    if(s==1){
      // small
      mp[x][y]++;
      mp[x-1][y]++;
      mp[x+1][y]++;
      mp[x][y-1]++;
      mp[x][y+1]++;
    }else if(s==2){
      // mid
      FOR(i,x-1,x+2){
        FOR(j,y-1,y+2){
          mp[i][j]++;
        }
      }
    }else{
      // big
      FOR(i,x-1,x+2){
        FOR(j,y-1,y+2){
          mp[i][j]++;
        }
      }
      mp[x-2][y]++;
      mp[x+2][y]++;
      mp[x][y-2]++;
      mp[x][y+2]++;
    }
  }
  int cnt = 0;
  int mx = 0;
  REP(i,10)REP(j,10){
    if(mp[i][j]==0)++cnt;
    else mx=max(mx,mp[i][j]);
  }
  cout<<cnt<<endl;
  cout<<mx<<endl;
  return 0;
}