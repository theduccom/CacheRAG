#include<iostream>
#include<cstdio>

int main(void){
	char ball = 'A';

	while( 1 ){
		int st;
		char a, b;
		
		st = scanf("%c,%c%*c", &a, &b);
		if( st == EOF ) break;
		if( ball == a ) ball = b;
		else if( ball == b ) ball = a;
	}
	printf("%c\n", ball);
	return 0;
}