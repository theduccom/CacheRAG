#include<iostream>
using namespace std ;

main(){
	int n,p,pm,pe,pj ;
	while( cin >> n , n ){
		for( int i=0 ; i<n ; i++ ){
			cin >> pm >> pe >> pj ;
			double a = (pm+pe) / 2.0 ;
			double b = (pm+pe+pj) / 3.0 ;
			bool t = false ;
			if( pm >= 80 || pe >= 80 ) t = true ;
			
			if( pm==100 || pe==100 || pj==100 ) cout << "A" ;
			else if( a >= 90 ) cout << "A" ;
			else if( b >= 80 ) cout << "A" ;
			else if( b >= 70 ) cout << "B" ;
			else if( b >= 50 && t ) cout << "B" ;
			else cout << "C" ;
			
			cout << endl ;
		}
	}
}