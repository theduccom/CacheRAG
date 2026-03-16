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

const int MAX_N = 50000;
int prime[MAX_N];
bool isPrime[MAX_N+1];
int ptr;
int n;
int res[MAX_N+1];

int main()
{
  prime[ptr++] = 2;
  for(int i=3; i<MAX_N; i+=2){
    if(!isPrime[i]){
      prime[ptr++] = i;
      for(int j=2*i; j<MAX_N; j+=i){
        isPrime[j] = true;
      }
    }
  }

  rep(i, ptr) erep(j, i, ptr){
    if(prime[i] + prime[j] > MAX_N) break;
    res[prime[i] + prime[j]] += 1;
  }

  while((cin >> n) && n){
    cout << res[n] << endl;
  }


  /*
  while((cin >> n) && n){
    if(n & 1){
      cout << 0 << endl;
      continue;
    }

    int p = lower_bound(prime, prime+ptr, n) - prime;
    int res = 0;
    rep(i, p){
      if(prime[i] > n - prime[i]) break;
      res += upper_bound(prime, prime+p, n-prime[i]) - lower_bound(prime, prime+p, n-prime[i]);
    }
    cout << res << endl;
  }
  */
  return 0;
}