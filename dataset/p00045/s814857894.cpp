#include<iostream>
#include<stdio.h>


int main()
{
	int sum = 0, num = 0, c = 0;
	int a, b;
	while( scanf( "%d,%d", &a, &b ) != EOF ){
	 	sum += a * b;
		num += b;
		c++;
	}
	
	printf( "%d\n", sum );

	printf( "%.0f\n", num / (double)c + 0.5 );

 	return 0;
}