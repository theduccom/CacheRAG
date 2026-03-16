#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(void){

	double d;
	while( scanf("%lf",&d) != EOF ) {
		double a[10];
		a[0] = d;
		for( int i = 1; i < 10; i++ ) {
			if( i % 2 == 0 ) a[i] = a[i-1] / 3.0;
			else a[i] = a[i-1] * 2.0;
		}
		double sum = 0.0;
		for( int i = 0; i < 10; i++ )
			sum += a[i];
		printf("%.8lf\n",sum);
	}

    return 0;
}