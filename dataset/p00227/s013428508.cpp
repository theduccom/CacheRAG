#include<bits/stdc++.h>
using namespace std ;

main(){
	int n , m ;
	int c[1010] ;
	while( cin >> n >> m , n , m ){
		for( int i=0 ; i<n ; i++ ) cin >> c[i] ;
		sort(c,c+n,greater<int>()) ;
		int sum = 0 ;
		for( int i=0 ; i<n ; i++ ){
			if( (i+1)%m ) sum += c[i] ;
		}
		cout << sum << endl ;
	}
}