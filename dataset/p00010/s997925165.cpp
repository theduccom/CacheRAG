// AOJ 0010 (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0010&lang=jp)
#include<cstdio>
#include<cmath>
#define rep(i,a) for(int i=0;i<(a);++i)

int n;

double sqr( double x )
{ return x*x; }

int main()
{
	scanf( "%d", &n );
	while( n-- )
	{
		double x1, y1, x2, y2, x3, y3;
		scanf( "%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3 );

		double a = sqrt(sqr(x3-x2)+sqr(y3-y2)), b = sqrt(sqr(x1-x3)+sqr(y1-y3)), c = sqrt(sqr(x2-x1)+sqr(y2-y1));
		double cosA = (sqr(b)+sqr(c)-sqr(a))/(2*b*c), cosB = (sqr(c)+sqr(a)-sqr(b))/(2*c*a), cosC = (sqr(a)+sqr(b)-sqr(c))/(2*a*b);
		double sinA = sqrt(1-sqr(cosA)), sinB = sqrt(1-sqr(cosB)), sinC = sqrt(1-sqr(cosC));
		double sin2A = 2*sinA*cosA, sin2B = 2*sinB*cosB, sin2C = 2*sinC*cosC;
		double px = (sin2A*x1+sin2B*x2+sin2C*x3)/(sin2A+sin2B+sin2C), py = (sin2A*y1+sin2B*y2+sin2C*y3)/(sin2A+sin2B+sin2C);

		printf( "%.3f %.3f %.3f\n", px, py, sqrt(sqr(x1-px)+sqr(y1-py)) );
	}

	return 0;
}