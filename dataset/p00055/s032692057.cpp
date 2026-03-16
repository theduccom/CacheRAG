#include<stdio.h>

double a[11];

int main()
{
	while( scanf( "%lf", &a[1] ) != EOF ){
		double ans = a[1];
	
		for( int i = 2; i <= 10; i++ ){
			if( i % 2 == 0 ){
			 	a[i] = a[i-1] * 2.0;
			}
			else{
			 	a[i] = a[i-1] / 3.0;
			}
			
			ans += a[i];
		}
		
		printf( "%.8f\n", ans );
	}

 	return 0;
}