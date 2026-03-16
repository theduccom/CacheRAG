#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
	double d, min_height, max_height;
	
	scanf("%lf", &d);
	max_height = min_height = d;

	while( true ){
		if( 1 != scanf("%lf", &d) ) break;

		min_height = min( min_height, d );
		max_height = max( max_height, d );
	}
	printf("%.2f\n", max_height - min_height);
	return 0;
}