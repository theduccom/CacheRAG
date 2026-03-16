#include <iostream>
#include <cstdio>
#include <complex>
#include <vector>
#include <algorithm>
using namespace std;

const double EPS = 1e-7;
typedef complex<double> P; /* _ */
struct L {                 /* üª */
	P p, q;
	L(P p, P q) : p(p), q(q) {}
};

// OÏ
double cross(P a, P b) { return imag(conj(a)*b); }

// ¼üaÆ¼übÌð_ðvZ·éDæÉð·»èªK{D
P crossPointLL(L a, L b){
	double A = cross(a.q-a.p, b.q-b.p);
	double B = cross(a.q-a.p, a.q-b.p);
	return b.p + B/A * (b.q-b.p);
}

// _pÆ_qÌ¼ñªüðÔ·
L pointBisector(P p, P q) {
	P cen = (p+q)*0.5;
	return L(cen, cen+(q-p)*P(0,1));
}

int main(){
	int n;
	cin>>n;
	double x1, y1, x2, y2, x3, y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		// Cuè@
		P p1 = P(x1, y1);
		P p2 = P(x2, y2);
		P p3 = P(x3, y3);
		L l1 = pointBisector(p1, p2);
		L l2 = pointBisector(p2, p3);
		P cen = crossPointLL(l1, l2);
		double r = abs(p1-cen);

		// ö®ðp¢½è@
		double a1 = 2*(x2-x1);
		double b1 = 2*(y2-y1);
		double c1 = x1*x1-x2*x2+y1*y1-y2*y2;
		double a2 = 2*(x3-x1);
		double b2 = 2*(y3-y1);
		double c2 = x1*x1-x3*x3+y1*y1-y3*y3;
		double cx = (b1*c2-b2*c1)/(a1*b2-a2*b1);
		double cy = (c1*a2-c2*a1)/(a1*b2-a2*b1);
		P cen2 = P(cx, cy);
		double r2 = abs(p1-cen2);

		printf("%.3f %.3f %.3f", cen2.real(), cen2.imag(), r2);
		cout<<endl;

		// ÜÆß
		//int x1000 = cen2.real() >= 0 ? 1000*cen2.real()+0.5 : 1000*cen2.real()-0.5;
		//int y1000 = cen2.imag() >= 0 ? 1000*cen2.real()+0.5 : 1000*cen2.real()-0.5;
		//int r1000 = r2          >= 0 ? 1000*r2         +0.5 : 1000*r2         -0.5;
		//printf("%.3f %.3f %.3f", 1.0*x1000/1000, 1.0*y1000/1000, 1.0*r1000/1000);
		//cout<<endl;

	}
	return 0;
}