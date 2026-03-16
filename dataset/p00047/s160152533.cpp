#include<iostream>
#include<stdio.h>

void swap( int &a, int &b )
{
 	int temp = a;
	a = b;
	b = temp;
	
	return;
}

int main()
{
	char s[2];
	int cup[3] = { 1, 0, 0 };
	
	while( scanf( "%c,%c", &s[0], &s[1] ) != EOF ){
	 	swap( cup[s[0] - 'A'], cup[s[1] - 'A'] );
	}
	
	for( int i = 0; i < 3; i++ ){
		if( cup[i] == 1 ){
			printf( "%c\n", 'A' + i );
		}
	}

 	return 0;
}