#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(){
  int W,n,count=1,a,i,j,sum=100000;
 
  scanf("%d",&W);
  while(  W != 0 ){
    cin >> n;
    int dp[n+1][W+1],value[n],weight[n];
    /*dp = 価値の最大値 */
    for( i = 0 ; i < n ; i++){
      scanf("%d,%d",&value[i],&weight[i]);
      
    }
    for( i = 0 ; i < n+1 ; i++){
      for( j = 0 ; j <= W ; j++){
	dp[i][j] = 0;
      }
    }

    for( i = 0 ; i < n ; i++){
      for( j = 0 ; j <= W ; j++){
	
	dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
	if((j+weight[i]) <= W){
	  dp[i+1][j+weight[i]] = max(dp[i+1][j+weight[i]],dp[i][j] + value[i]);  
	}
      }
    }

    for ( i =0 ; i <= n ; i++){
      for ( j = 0 ; j <= W ; j++){
	if(dp[n][W] == dp[i][j]){
	  sum = min(sum, j);
	}
      }
    }

    cout << "Case " << count << ":" <<endl;
    cout << dp[n][W] <<endl;
    cout << sum <<endl;
    scanf("%d",&W);
    count++;
    sum =1000000 ;
  }
  
  


  return 0;
}