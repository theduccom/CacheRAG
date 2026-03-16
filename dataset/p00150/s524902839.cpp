#include <cstdio>
#define MAX 10001

int main( void ){
	int n, i;
	int a[ MAX ] = {0};
	while(1){
		scanf( "%d", &n ); 
		if(!n){break;}
		for( i = 2; i <= n; i++ ){
			if( a[ i ] ){ continue; }
			for( int j = i * 2; j <= n; j += i ){
				a[ j ] = 1;
			}
		}
		for( i = n; a [ i ] || a[ i - 2 ]; i-- ){}
		printf( "%d %d\n", i - 2, i );
	}
	return 0;
}