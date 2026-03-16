#include <cstdio>
#include <complex>
#include <cmath>
#include <vector>
using namespace std;

typedef complex<double> P;

double cross(P a, P b){
	return real(a) * imag(b) - imag(a) * real(b);
}

int main(){
	double x, y;
	vector<P> v;
	while(scanf("%lf,%lf", &x, &y) != EOF){
		v.push_back(P(x, y));
	}
	double s = 0.0;
	for(int i = 0; i < v.size(); ++i){
		s += cross(v[i], v[(i + 1) % v.size()]);
	}
	printf("%.10f\n", 0.5 * abs(s));
}