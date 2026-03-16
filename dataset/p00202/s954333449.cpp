#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

const int MAX_SQRT_B = 1000001;
const int MAX_RANGE = 1000001;

typedef unsigned long long U;

vector<U> primes;

void elatos(U a, U b){
  if(a < 2) a = 2;
  if(a >= b) return;

  bool isp_r[MAX_RANGE];
  bool isp_sqrtb[MAX_SQRT_B];
  memset(isp_r , 1 , sizeof(isp_r));
  memset(isp_sqrtb , 1 , sizeof(isp_sqrtb));

  for(U i=2; (U)i*i < b; i++)
    if(isp_sqrtb[i]){
      for(U j=2*i; (U)j*j < b; j+=i) isp_r[j] = 0;
      for(U j = max((U)2,(a+i-1)/i)*i; j<b; j+=i) isp_r[j-a] = 0;
    }
  for(U i=a; i<b; i++) if(isp_r[i-a]) primes.push_back(i);
}

bool isp(U n){
  vector<U>::iterator i = lower_bound(primes.begin(), primes.end(), n);
  return *i == n;
}

#define rep(i,n) for(int i=0; i<(n); i++)

int p[31];
int m[31];
int dp[1000001];

int main(){
  elatos(0,1000001);
  int n;
  int bu;
  while(cin >> n >> bu , n + bu){
    rep(i,n){
      cin >> p[i];
      m[i] = bu/p[i];
    }
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;
    rep(i,n){
      rep(j,bu+1){
	if(dp[j] >= 0){
	  dp[j] = m[i];
	}
	else if(j < p[i] || dp[j-p[i]] <= 0){
	  dp[j] = -1;
	}
	else {
	  dp[j] = dp[j - p[i]] - 1;
	}
      }
    }
    int ans = -1;
    for(int i=bu+(bu+1)%2; i>=1; i-=2){
      if(dp[i] >= 0 && isp(i)){
	ans = i;
	break;
      }
    }
    if(ans > 0){
      cout << ans << endl;
    } else {
      cout << "NA" << endl;
    }
  }
  return 0;
}

      
    
    