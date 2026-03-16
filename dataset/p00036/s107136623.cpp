#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000007
#define EPS 1E-12

const int N = 8;
char m[N][N];

inline bool check(int x, int y){ return 0<=x&&x<N && 0<=y&&y<N; }

int main()
{
  while(true){
    rep(i, N) rep(j, N) if(!(cin >> m[i][j])) return 0;

    rep(i, N) rep(j, N) if(m[i][j] == '1'){
      if(check(i+1, j+1) && m[i+1][j]=='1' && m[i][j+1]  =='1' && m[i+1][j+1]=='1') cout << "A" << endl;
      if(check(i+3, j  ) && m[i+1][j]=='1' && m[i+2][j]  =='1' && m[i+3][j]  =='1') cout << "B" << endl;
      if(check(i  , j+3) && m[i][j+1]=='1' && m[i][j+2]  =='1' && m[i][j+3]  =='1') cout << "C" << endl;
      if(check(i+2, j-1) && m[i+1][j]=='1' && m[i+1][j-1]=='1' && m[i+2][j-1]=='1') cout << "D" << endl;
      if(check(i+1, j+2) && m[i][j+1]=='1' && m[i+1][j+1]=='1' && m[i+1][j+2]=='1') cout << "E" << endl;
      if(check(i+2, j+1) && m[i+1][j]=='1' && m[i+1][j+1]=='1' && m[i+2][j+1]=='1') cout << "F" << endl;
      if(check(i+1, j+1) &&
         check(i+1, j-1) && m[i][j+1]=='1' && m[i+1][j-1]=='1' && m[i+1][j]  =='1') cout << "G" << endl;
      break;
    }
  }

  return 0;
}