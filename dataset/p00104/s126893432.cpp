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

const int MAX_H = 100;
const int MAX_W = 100;
char m[MAX_H+1][MAX_W+1];
int h, w;
bool used[MAX_H+1][MAX_W+1];

int main()
{
  while((cin >> h >> w) && h && w){
    rep(i, h) rep(j, w) used[i][j] = false;
    rep(i, h) rep(j, w) cin >> m[i][j];

    int hx = 0;
    int hy = 0;
    while(true){
    used[hx][hy] = true;
    if(m[hx][hy] == '>') hy += 1;
    if(m[hx][hy] == '<') hy -= 1;
    if(m[hx][hy] == '^') hx -= 1;
    if(m[hx][hy] == 'v') hx += 1;
    if(m[hx][hy] == '.'){ cout << hy << " " << hx << endl; break;}
    if(used[hx][hy]){ cout << "LOOP" << endl;  break; }
    }
  }

  return 0;
}