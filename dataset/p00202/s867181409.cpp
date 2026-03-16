#include <cstdio>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>

#define rep(i, j) FOR(i, 0, j)
#define FOR(i, j, k) for(int i = j; i < k; ++i)

using namespace std;
bool a[1000001];

bool isprime(int x){
  for(int i = 2; i * i <= x; i++)
    if(x % i == 0) return true;
  return x == 1; 
}

int solve(int i){
  while(true){
    if(a[i] && !isprime(i)) return i;
    i--;
  }
}

int main(){
  int n, x, v, res;
  while(scanf("%d%d", &n, &x) && n && x){
    rep(i, x + 1) a[i] = false;
    a[0] = true;
    rep(i, n){
      scanf("%d", &v);
      for(int i = v; i <= x; i++) if(a[i - v]) a[i] = true;
    }

    if(res = solve(x)) printf("%d\n", res);
    else puts("NA");
  }
  return 0;
}