#include<iostream>
using namespace std ;

main(){
	int n,p,d1,d2 ;
	while( cin >> n , n ){
		int ans,mx = -1 ;
		for( int i=0 ; i<n ; i++ ){
			cin >> p >> d1 >> d2 ;
			if( mx < d1 + d2 ){
				mx = d1 + d2 ;
				ans = p ;
			}
		}
		cout << ans << " " << mx << endl ;
	}
}