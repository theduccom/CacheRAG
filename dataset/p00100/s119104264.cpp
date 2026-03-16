#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000009
#define EPS 1E-9

const int N = 4000;
int n;
ll cost[N+1];
int id;
ll dc, dn;
ll res[N];

int main()
{
  while((cin >> n) && n){
    bool flag = true;
    rep(i, N+1) cost[i] = 0LL;
    int ptr = 0;

    rep(i, n){
      cin >> id >> dc >> dn;
      if(!cost[id]) res[ptr++] = id;
      cost[id] += dc * dn;
    }

    rep(i, ptr) if(cost[res[i]] >= 1000000){
      flag = false;
      cout << res[i] << endl;
    }
    if(flag) puts("NA");
  }

  return 0;
}