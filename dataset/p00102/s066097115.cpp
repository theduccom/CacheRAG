#include<iostream>
using namespace std ;

int main(){
	
	int n ;
	while( cin >> n , n ){
		
		int m[11][11] = {} ;
		
		for( int i=0; i<n ; i++ ){
			for( int j=0 ; j<n ; j++ ){
				cin >> m[i][j] ;
				m[i][n] += m[i][j] ;
			}
		}
		
		for( int j=0 ; j<=n ; j++ ){
			for( int i=0 ; i<n ; i++ ){
				m[n][j] += m[i][j] ;
			}
		}
		
		for( int i=0 ; i<=n ; i++ ){
			for( int j=0 ; j<=n ; j++ ){
				if( m[i][j] < 10 ) cout << ' ' ;
				if( m[i][j] < 100 ) cout << ' ' ;
				if( m[i][j] < 1000 ) cout << ' ' ;
				if( m[i][j] < 10000 ) cout << ' ' ;
				cout << m[i][j] ;
			}
			cout << endl ;
		}
	}
	
return 0 ;
}