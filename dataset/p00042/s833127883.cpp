#include <iostream>
#include <algorithm>
using namespace std;

struct Item{
  int v,w;
};

int main() {
  int W;    
  Item item[1001];
  int dp[1001][1001];
  int cnt = 0;
  while( cin >> W , W ) {
    int n; cin >> n;
    char ch;

    for ( int i = 0; i <= n; i++ ) {
      for ( int j = 0; j <= W; j++ ) dp[i][j] = 0;
    }

    for ( int i = 1; i <= n; i++ ) {
      cin >> item[i].v >> ch >> item[i].w;
    }

    for ( int i = 1; i <= n; i++ ) {
      for ( int j = 1; j <= W; j++ ) {
	if ( item[i].w <= j ) {
	  if ( item[i].v + dp[i-1][ j - item[i].w ] > dp[i-1][j] ) 
	    dp[i][j] = item[i].v + dp[i-1][ j - item[i].w ];
	  else dp[i][j] = dp[i-1][j];
	}else dp[i][j] = dp[i-1][j];
      }
    }
    
    /* for ( int i = 1; i <= n; i++ ) {
      for ( int j = 1; j <= W; j++ ) {
	cout << dp[i][j] << " ";
      }
      cout << endl;
    }
    */
    cnt++;
    cout << "Case" << " " << cnt << ":" << endl;
    cout << dp[n][W] << endl;
    for ( int i = 0; i <= W; i++ ) {
      if ( dp[n][i] == dp[n][W] ) {
	cout << i << endl;
	break;
      }
    }
  }
  return 0;
}