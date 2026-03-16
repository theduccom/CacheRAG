#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int dp[1002][1002];

int main() {
  vector <int> cost,ne;
  int w;
  int n;
  int count = 0;
  while(1) {
    count++;
    cin >> w;
    if(w == 0) break;
    cin >> n;

    string str,a;
    cost.resize(n);
    ne.resize(n);
    for(int i=0;i<n;i++) {
      cin >> str;

      int flg = 0,b,c;
      a.clear();
      cost[i] = ne[i] = 0;
      for(int j=0;j<str.size();j++) {
	if(str[j] == ',') {
	  c= 1;
	  for(int k=j-1;k>=0;k--) {
	    ne[i] += (str[k]-'0')*c;
	    c *= 10;
	  }
	  b = j;
	  continue;
	}
	a += str[i];
      }
      c = 1;
      for(int k=str.size()-1;k>b;k--) {
	cost[i] += (str[k]-'0')*c;
	c *= 10;
      }
    }
    
    for(int i=0;i<=n;i++)
      for(int j=0;j<=w;j++)
	dp[i][j] = -1;
   
    for(int i=0;i<=n;i++) dp[i][0] = 0;

    for(int i=1;i<=n;i++) {
      for(int j=0;j<=w;j++) {
	if(dp[i-1][j] != -1 && cost[i-1]+j <= w) { 
	  dp[i][cost[i-1]+j] =max(ne[i-1] + dp[i-1][j],dp[i][j+cost[i-1]]);
	}
	dp[i][j] =max(dp[i][j], dp[i-1][j]);
      }
    }
    
    /*    for(int i=0;i<=n;i++){
      for(int j=0;j<=w;j++)
	cout << dp[i][j] <<" ";
	  cout << endl;
	  } */

    
    int   ans = -1,ans2;
    for(int i=0;i<=w;i++)
      if(ans < dp[n][i] )
	ans = dp[n][i],ans2 = i;
    
    cout <<"Case "<< count <<":"<<endl;
    cout << ans <<endl;
    cout << ans2 <<endl;
    
    
  }
  return 0;
}