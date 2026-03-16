#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	double a;
	double sum;

	while( cin >> a ){
		sum = a;
		for( int i = 2;i <= 10;i++ ){
			if( i % 2 ){
				a /= 3;
			} else {
				a *= 2;
			}
			sum += a;
		}

		printf("%.8f\n", sum );
	}
	return 0;
}