#include <stdio.h>
#include <iostream>
using namespace std ;

double calc( int cnt , double N ){
	if( cnt == 11 ) return 0;
	else return N + calc( cnt+1 , N / ( (cnt%2)?0.5:3.0 ) ) ;
}

int main(){
	
	double D;
	
	while( cin >> D ){
		if( cin.eof() ) break ;
		printf("%.8lf\n",calc(1,D));
	}
	
	return 0;
}