#include<bits/stdc++.h>
using namespace std ;

int f( char x ){
	switch (x){
		case '0' : return 0 ;
		case '1' : return 1 ;
		case '2' : return 2 ;
		case '3' : return 3 ;
		case '4' : return 4 ;
		case '5' : return 5 ;
		case '6' : return 6 ;
		case '7' : return 7 ;
		case '8' : return 8 ;
		case '9' : return 9 ;
	}
}

int main(){
	
	int n ;
	for( cin >> n ; n-- ; ){
		string a,b ;
		cin >> a >> b ;
		if( a.size() > b.size() ) swap(a,b) ;
		reverse( a.begin() , a.end() ) ;
		reverse( b.begin() , b.end() ) ;
		while( a.size() < b.size() ) a+='0' ;
		
		vector<int> c ;
		c.push_back(0) ;
		for( int i=0 ; i<a.size() ; i++ ){
			c[i] += f(a[i]) + f(b[i]) ;
			c.push_back( c[i]/10 ) ;
			c[i] %= 10 ;
		}
		if( c[c.size()-1] == 0 ) c.pop_back() ;
		reverse( c.begin() , c.end() ) ;
		
		if( c.size() > 80 ) cout << "overflow" << endl ;
		else {
			for( int i=0 ; i<c.size() ; i++ ) cout << c[i] ;
			cout << endl ;
		}
	}
	
return 0 ;
}