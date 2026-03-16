#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define rrev(i, m, n) for(int (i)=(n)-1; (i)>=(m); (i)--)
#define erev(i, m, n) for(int (i)=(n); (i)>=(m); (i)--)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

const int    INF = 1000000000;
const ll     MOD = 1000000007LL;
const double EPS = 1E-12;

string s;
map<char, int> hs;

int main()
{
  hs['I'] = 1;
  hs['V'] = 5;
  hs['X'] = 10;
  hs['L'] = 50;
  hs['C'] = 100;
  hs['D'] = 500;
  hs['M'] = 1000;

  while(cin >> s){
    int res = 0;
    rep(i, s.size()-1){
      if(hs[s[i]] < hs[s[i+1]])  res -= hs[s[i]];
      else res += hs[s[i]];
    }
    res += hs[s[s.size()-1]];
    cout << res << endl;
  }

  return 0;
}