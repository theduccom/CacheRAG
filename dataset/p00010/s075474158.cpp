#include <iostream>
#include <complex>

using namespace std;

typedef complex<double> P;
struct L { P p, q; L(P p, P q) : p(p), q(q) {} };

double cross(P a, P b) { return imag(conj(a)*b); }

P ssCrosspoint(L a, L b){
	double A = cross(a.q-a.p, b.q-b.p);
	double B = cross(a.q-a.p, a.q-b.p);
	return b.p + B/A * (b.q-b.p);
}

int main(){
	int n; cin >> n;
	while(n--){
		P p[3];
		for(int i=0;i<3;i++) cin >> real(p[i]) >> imag(p[i]);
		P m0 = 0.5*(p[0]+p[1]);
		P m1 = 0.5*(p[0]+p[2]);
		P c = ssCrosspoint(L(m0, m0+(p[1]-p[0])*P(0,1)), L(m1, m1+(p[2]-p[0])*P(0,1)));
		printf("%.3lf %.3lf %.3lf\n", real(c), imag(c), abs(c-p[0]));
	}
}