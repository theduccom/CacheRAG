#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
	double cx[20], cy[20];
	int i;
	double a, b, c, z;
	double S;
	char dummy;
	
	i=0;
	while( std::cin >> cx[i] >> dummy >> cy[i] ) i++;

	S = 0.0;
	for( int j=1; j<i-1; j++) {
		a = sqrt( (cx[0]-cx[j])*(cx[0]-cx[j]) + (cy[0]-cy[j])*(cy[0]-cy[j]) );
		b = sqrt( (cx[0]-cx[j+1])*(cx[0]-cx[j+1]) + (cy[0]-cy[j+1])*(cy[0]-cy[j+1]) );
		c = sqrt( (cx[j]-cx[j+1])*(cx[j]-cx[j+1]) + (cy[j]-cy[j+1])*(cy[j]-cy[j+1]) );
		z = ( a + b + c ) / 2.0;

		S += sqrt( z*(z-a)*(z-b)*(z-c) );
	}
	
	if(S<0.000000) S*=-1.0;
	
	std::printf("%.6f", S);
	return 0;
}