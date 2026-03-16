#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define all(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, m, n) for(int i = m; i < n; i++)
#define INF INT_MAX
#define MOD 1000000007
#define fcout cout << fixed << setprecision(15)
typedef long long ll;
typedef pair<int, int> P;
int gcd(int a,int b){return b?gcd(b,a%b):a;};
int lcm(int a,int b){return a * b / gcd(a, b);};
int mod(int a,int b){return (a+b-1)/b;};
int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
template<class T>inline bool chmax(T& a,T b){if(a < b){a=b;return true;}return false;};
template<class T>inline bool chmin(T& a,T b){if(a > b){a=b;return true;}return false;};

bool IsPrime(int num){
  if (num < 2) return false;
  else if (num == 2) return true;
  else if (num % 2 == 0) return false;

  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while(true) {
    cin >> n;
    if(n == 0) break;
    for(int i = n; i >= 0; i--) {
      if(IsPrime(i) && IsPrime(i - 2)) {
        cout << i - 2 << " " << i << endl;
        break;
      }
    }
  }
  return 0;
}

