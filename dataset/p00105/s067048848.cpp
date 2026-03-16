#include<bits/stdc++.h>
using namespace std ;
#define Psi pair<string,int>

main(){
	int n ;
	string s ;
	vector<Psi> V ;
	
	while( cin >> s ){
		if( cin.eof() ) break ;
		cin >> n ;
		
		V.push_back( Psi(s,n) ) ;
	}
	
	sort( V.begin() , V.end() ) ;
	
	string t = "0a" ;
	for( int i=0 ; i<V.size() ; i++ ){
		if( V[i].first != t ){
			if( i ) cout << endl ;
			cout << V[i].first << endl ;
			cout << V[i].second ;
		}
		else cout << " " << V[i].second ;
		
		t = V[i].first ;
	}
	
	cout << endl ;
}