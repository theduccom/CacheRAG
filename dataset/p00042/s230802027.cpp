#include <iostream>
#include <algorithm>
#include <vector>
//#include <stack>
//#include <queue>
//#include <map>
#include <cmath>
//#include <string>
//#include <sstream>
#include <iomanip>
//#include <complex>
#include <stdio.h>
//小数制度 	cout << fixed << setprecision(5) << tmp << endl;
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)

int dp[1010][1010];
int v[1010];
int w[1010];
int main(){
  int wei,n;
  int cnt = 1;
  while(cin >> wei,wei){
    cin >> n;
    REP(i,1010) REP(j,1010) dp[i][j] = 0;
    for(int i=0;i<n;i++){
      scanf("%d,%d",&v[i],&w[i]);
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<=wei;j++){
        if(j-w[i]<0) dp[i+1][j] = dp[i][j];
        else  dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
      }
    }
    /*for(int i=0;i<n+1;i++){
      for(int j=0;j<wei+1;j++){
        cout << dp[i][j] << " ";//l<<endl;
      }
      cout << endl;
    }*/
    int maxv=0;
    int ans=-1;
    for(int i=0;i<wei+1;i++){
      if(maxv < dp[n][i]){
        maxv = dp[n][i];
        ans = i;
      }
    }
    cout << "Case " << cnt << ":" <<endl;
    cout << maxv << endl << ans << endl;
    cnt++;
  }
}