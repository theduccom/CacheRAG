#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <cmath>
#include <map> 
#include <sstream>
#include <cstdio>
#include <complex>
#include <cstring>
using namespace std;
 
const int MAX= 10000100;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define ll long long int
#define gcd(a,b) __gcd(a,b)
#define pb(a) push_back(a)
int GCD(int a, int b) {if(!b) return a; return gcd(b, a%b);}
int lcm(int a, int b) {return a*b / gcd(a, b);}

const int MAX_W = 1000;
const int MAX_N = 1000;
int W,N;
int v[MAX_N];
int w[MAX_N];
int dp[MAX_W + 1];
void solve(){
  fill(dp, dp+W + 1 , 0);
  rep(i,N){
    for(int j = W ; j >= 0 ; j --){
      if(j - w[i] >= 0){
	dp[j] = max(dp[j] , dp[j-w[i]] + v[i]);
      }
    }
  }
  printf("%d\n",dp[W]);
  for(int i = W ; i >= 0 ; i --){
    if(dp[W] != dp[i]){
      printf("%d\n",i+1);
      break;
    }
  }
}

int main(void){
  int i = 0 ;
  while(scanf("%d",&W),W){
    printf("Case %d:\n",++i);
    scanf("%d",&N);
    rep(i,N){
      scanf("%d,%d",&v[i],&w[i]);
    }
    solve();
  }
  return 0;
}