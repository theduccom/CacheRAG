#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std ;

int main(){
	
	double n , r , m[3] ;
	
	while( cin >> m[0] >> m[1] >> m[2] , m[0] ){
		
		sort( m , m+3 ) ;
		m[2] = sqrt( m[0]*m[0] + m[1]*m[1] ) ;
		
		cin >> n ;
		
		for( int i=0 ; i<n ; i++ ){
			cin >> r ;
			if( r*2 > m[2] ) cout << "OK" ;
			else cout << "NA" ;
			cout << endl ;
		}
	}
	
return 0 ;
}