#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <utility>
#include <climits>
#include <cstring>
#include <cstdio>

#include <complex>
typedef std::complex<double> xy_t;
double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }

using namespace std;
typedef long long int llg;

const int INF = 1000001000;
#define REP(var, count) for(int var=0; var<count; var++)

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
	std::fill( (T*)array, (T*)(array+N), val );
}

int main(void) {

	double p, q;
	scanf("%lf,%lf", &p, &q);
	xy_t P(p,q);
	
	double ret = 0.0;
	
	xy_t prev;
	int N = 0;
	
	while ( !feof(stdin) ) {
		double a, b;
		scanf("%lf,%lf", &a, &b);
		xy_t X(a,b);
		
		if ( N > 0 ) {
			ret += abs( cross_product(X-P,prev-P) / 2 );
		}
		
		prev = X;
		N++;
	}
	
	printf("%lf\n", ret);
}