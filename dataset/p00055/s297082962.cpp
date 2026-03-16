#include <iostream>
#include <cstdio>

using namespace std;

int main( void )
{
	double a;
	while(cin >> a) {
		double sum = a;
		for(int i=2; i <= 10; ++i) {
			if(i & 1)	a /= 3.0;
			else		a *= 2.0;
			sum += a;
		}
		printf("%.8lf\n", sum);
	}
	return 0;
}