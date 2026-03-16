#include<cstdio>
using namespace std;

int main(){
	double a;
	while( scanf("%lf", &a ) == 1 ){
		double S = a;
		for( int i=2; i<=10; i++ ){
			if( i%2 )
				a /= 3.0;
			else
				a *= 2.0;
			S += a;
		}
		printf("%.8f\n", S);
	}
	return 0;
}