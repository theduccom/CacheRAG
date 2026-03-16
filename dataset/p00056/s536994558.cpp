#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<map>

#define f first
#define s second

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

template<int m>
class Prime{
  std::vector<bool> p;
  std::vector<int> ps;
public:
  Prime(){
    p = std::vector<bool>(m,true);
    p[0]=p[1]=false;
    for(int i=4;i<m;i+=2)
      p[i]=false;
    ps.push_back(2);
    for(int i=3;i<m;i+=2){
      if(p[i]){
        ps.push_back(i);
        for(int j=i+i;j<m;j+=i)
          p[j]=false;
      }
    }
  }

  bool isPrime(int n){
    return p[n];
  }

  int operator [] (int n){
    if(n<ps.size()) return ps[n];
    else return 0;
  }

  int size(){
    return ps.size();
  }
};

#define MAX (60000)
int main(){
  Prime<MAX> p;
  int n;
  while(cin>>n, n){
    int cnt = 0;
    for(int i=0; ; i++){
      if(p[i] + p[i] > n) break;
      if(p.isPrime(n - p[i]))
	cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}