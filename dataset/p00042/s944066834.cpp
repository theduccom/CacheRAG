#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int ww,n;
  char c;
  int v[1050], w[1050];
  int dp[1050];

  int datacase=1;
  while( cin>>ww && ww ){
    cin >> n;
    for( int i=0;i<n;i++ )
      cin >> v[i] >> c >> w[i];

    dp[0]=0;
    for( int i=1;i<=ww;i++ )
      dp[i] = -1;


    for( int j=0;j<n;j++ ){
      for( int i=ww-w[j];i>=0;--i){
      //      for( int i=0;i<=ww-w[j];i++ ){ // 間違い
	if( dp[i]>=0 ){
	  int k =i+w[j];
	  dp[k] = max( dp[k],dp[i]+v[j] );
	}
      }
    }

    int aw=0,av=0;
    for( int i=0;i<=ww;i++ ){
      //      cout << i << "\t" << dp[i] << endl;
      if( dp[i]>av ){
	av=dp[i]; aw=i;
      }
    }
    cout << "Case " << datacase++ << ":" << endl;
    cout << av << endl;
    cout << aw << endl;


  }
  return 0;
}