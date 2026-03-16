#include<cstdio>
#include<cmath>

int n = 0;
double x[20], y[20];

int main()
{
	while( scanf( "%lf,%lf", &x[n], &y[n] ) != EOF )
		++n;

	double area = 0.0;
	for( int i = 0; i != n; ++i )
		area += x[i] * y[(i+1)%n] - y[i] * x[(i+1)%n];

	area /= 2.0;

	printf( "%.6f", std::abs( area ) );

	return 0;
}