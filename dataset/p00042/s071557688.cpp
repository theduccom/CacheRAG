#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std ;

int N,W ;
int m[1010][2] ;
int dp[1010][1010] ;
int cnt = 0 ;

int main(){
	
	while( cin >> W , W ){
		cin >> N ;
		cnt++;
		for( int i=0 ; i<1010 ; i++ )
			for( int j=0 ; j<1010 ; j++ )
				dp[i][j] = 0 ;
		
		for( int i=1 ; i<=N ; i++ ){
			scanf("%d,%d",&m[i][0] ,&m[i][1]) ;
		}
		
		for( int i=1 ; i<=N ; i++ ){
			for( int j=0 ; j<=W ; j++ ){
				if( j-m[i][1] >= 0 ){
					dp[i][j] = max( dp[i-1][j] , dp[i-1][j-m[i][1]] + m[i][0] ) ;
				}
				else{
					dp[i][j] = dp[i-1][j];
				}
			}
		}
		
		int best[2] = {0} ;
		for( int j=0 ; j<=W ; j++ ){
			if( best[0] < dp[N][j] ){
				best[0] = dp[N][j] ;
				best[1] = j ;
			}
		}
		
		cout << "Case " << cnt << ':' << endl ;
		cout << best[0] << endl ;
		cout << best[1] << endl ;
	}
	
return 0;
}