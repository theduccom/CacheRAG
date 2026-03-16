#include<iostream>
#include<stdio.h>
#include<string.h>

int c[4];

int f( char *str )
{
	if( !strcmp( str, "A" ) ){
	 	return 0;
	}
	else if( !strcmp( str, "B" ) ){
	 	return 1;
	}
	else if( !strcmp( str, "AB" ) ){
	 	return 2;
	}
	else if( !strcmp( str, "O" ) ){
	 	return 3;
	}
}

int main()
{
	int n;
	char str[3];
	
	while( scanf( "%d,%s", &n, str ) != EOF ){
		c[f( str )]++;
	}
	
	for( int i = 0; i < 4; i++ ){
		printf( "%d\n", c[i] );
	}

	return 0;
}