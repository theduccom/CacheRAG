#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 100000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
#define MOD(x) (x%(mod))
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

/*---------------------------------------------------*/

int W,N;
int v[1005],w[1005];
int dp[1005][1005];

void DEBUG(){
  rep(i,W+1)cout<<i<<": "<<dp[N][i]<<endl;
}

void init(){
  rep(i,1005){
    rep(j,1005){
      dp[i][j]=-INF;
    }
  }
}

void DP(){
  for(int i=0;i<1005;i++)dp[0][i]=0;
  
  for(int i=0;i<N;i++){
    for(int j=0;j<=W;j++){
      if(j>=w[i])dp[i+1][j]=max(dp[i][j-w[i]]+v[i],dp[i][j]);
      else dp[i+1][j]=dp[i][j];
    }
  }
}

int main(){
  int cnt=1;
  while(cin>>W){
    init();
    if(W==0)break;
    cin>>N;
    rep(i,N)scanf("%d,%d",&v[i],&w[i]);
    
    DP();

    //DEBUG();
    int ans_value=0,ans_weight=0;
    rep(i,W+1){
      if(dp[N][i]>ans_value){
	ans_value=dp[N][i];
	ans_weight=i;
      }
    }
    cout<<"Case "<<cnt<<":"<<endl;
    cout<<ans_value<<endl;
    cout<<ans_weight<<endl;
    cnt++;
  }
  return 0;
}