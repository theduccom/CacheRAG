#include<iostream>
using namespace std;
#define KMAX 30
#define VMAX 1000000

int K[KMAX], T[VMAX+1];

void eratos ( int n, bool prime[]){
    for ( int i = 0; i <= n; i++ ) prime[i] = false;
    for ( int i = 3; i <= n; i += 2 ) prime[i] = true;
    prime[2] = true;
    for ( int i = 3; i*i <= n; i += 2 ){
	if ( !prime[i] ) continue;
	for ( int j = i + i; j <= n; j += i ) prime[j] = false;
    }
}

main(){
    bool prime[VMAX + 1];
    eratos( VMAX, prime );

    int k, v;
    while( cin >> k >> v && k && v ){
	for ( int i = 0; i < k; i++ ) cin >> K[i];
	
	for ( int j = 0; j <= v; j++ ) T[j] = 0;
	for ( int j = K[0]; j <= v; j += K[0] ) T[j] = 1;
	T[0] = 1;
	for ( int i = 1; i < k; i++ ){
	    for ( int j = K[i]; j <= v; j++ ){
		T[j] = (T[j] | T[j-K[i]]);
	    }
	}
	int ans = -1;
	for ( int i = v; i >= 2; i-- ){
	    if ( prime[i] && T[i] ) { ans = i; break; }
	}
	
	if ( ans == -1 ) cout << "NA" << endl;
	else cout << ans << endl;
    }
}