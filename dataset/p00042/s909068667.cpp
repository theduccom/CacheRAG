#include <iostream>
#include <cstring>
using namespace std;

#define INF 10000000

int W,N;
int v[1001],w[1001];

// dp[i][j] : i番目以降のものから重さｊ以下になるように選んだ時の最大値
int dp[1002][1002];

int rec(int i, int j){
  if(dp[i][j] >= 0){
    return dp[i][j];
  }
  int res;
  if(i == N){
    res = 0;
  }else if( j < w[i] ){
    res = rec(i + 1 , j);
  }else{
    res = max( rec(i + 1,j) , rec(i+1, j-w[i]) + v[i] );
  }
  return dp[i][j] = res;
}

int main(){
  int x = 1;
  while(1){
   
    cin >> W;
    if(W == 0) break;

    cin >> N;
    memset(dp,-1,sizeof(dp));
    for(int i = 0; i < 1001; i++){
      w[i] = INF;
      v[i] = -1;
    }
 
    for(int i = 0 ; i < N ; i++){
      char tmp;
      cin >> v[i] >> tmp >> w[i];
      //  cout << v[i] <<" "<< w[i] << endl; 
    }
    
    for(int i = 0; i < N ; i++){
      for(int j = 0; j <= W ; j++){
	rec(i,j);
      }
    }
    
    cout <<"Case " << x << ":" << endl;
    cout <<  dp[0][W] << endl;
    int t;
    for( t = 0; dp[0][W] != dp[0][t] ;t++){}
    cout << t << endl; 
    x++;
  }
  return 0;

}