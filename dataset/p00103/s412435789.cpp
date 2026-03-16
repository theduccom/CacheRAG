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

int n;
string s;

int main()
{
  cin >> n;

  while(n--){
    int base = 0;
    int out = 0;
    int score = 0;

    while(cin >> s){
      if(s == "HIT"){
        score += (base >> 2) & 1;
        base = (((1 << 3) - 1) & (base << 1)) | 1;
        continue;
      }
      if(s == "HOMERUN"){
        rep(i, 3) score += (base >> i) & 1;  score += 1;
        base = 0;
        continue;
      }
      if(s == "OUT"){
        out += 1;
        if(out >= 3) break;
      }
    }

    cout << score << endl;
  }

  return 0;
}