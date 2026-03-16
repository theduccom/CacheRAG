//0010 Circumscribed Circle of A Triangle.
/*
½ÊãÌ_ (x1, y1)(x2, y2)(x3, y3) ð¸_Æµ½Op`Ì
OÚ~ÌSÀW(xp, yp)Æ¼a r ðoÍµÄI¹·évOðì¬µÄ­¾³¢B
x1, y1, x2, y2, x3, y3, xp, yp ÍA»ê¼ê -100 Èã 100 ÈºÌÀÆµÜ·B 

ÅÉf[^ZbgÌnª^¦çêÜ·
oÍÍA¬_Èºæ4ÅlÌÜüµÄAxp, yp, rð¼pXy[XÅæØÁÄ­¾³¢
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


//¼a@http://blog.livedoor.jp/calc/archives/9248011.html
//OS_@http://homepage2.nifty.com/gis_yasu21/sub1.htm

template<class T>
struct Point
{
	T x, y;
	Point(){}
	Point(T x, T y):x(x),y(y){}
};
template<class T>
T Square(const T &x)
{
	return x*x;
}
template<class T>
T Distance(const Point<T> &a, const Point<T> &b)
{
	return sqrt( Square(a.x-b.x) + Square(a.y-b.y) );
}

int main(void)
{
	const int N = 3;
	int n;
	Point<double> p[N], o;
	double r;
	int i, j;

	cin >> n;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < N; j++)
			cin >> p[j].x >> p[j].y;

		//wÌö®ÅOÚ~ÌÊÏðßé
		double a, b, c, s, S;
		a = Distance(p[1], p[2]);
		b = Distance(p[2], p[0]);
		c = Distance(p[0], p[1]);
		s = (a+b+c)/2;
		S = sqrt(s*(s-a)*(s-b)*(s-c));
		//abc/4SªOS~Ì¼a@¿ÈÝÉS/sÍàS~Ì¼a
		r = (a*b*c) / (4*S);

		//S = (1/2)*bc*sinAæè
		double sinA, sinB, sinC;
		sinA = 2*S/b/c;
		sinB = 2*S/c/a;
		sinC = 2*S/a/b;
		//]·èæèAa^2 = b^2 + c^2 - 2bc*cosA
		double cosA, cosB, cosC;
		cosA = (Square(b)+Square(c)-Square(a)) / (2*b*c);
		cosB = (Square(c)+Square(a)-Square(b)) / (2*c*a);
		cosC = (Square(a)+Square(b)-Square(c)) / (2*a*b);
		//sin(2A) = 2*sinA*cosA
		double sin2A, sin2B, sin2C;
		sin2A = 2*sinA*cosA;
		sin2B = 2*sinB*cosB;
		sin2C = 2*sinC*cosC;
		//OS~ÌXÀWÍA(x1*sin2A + x2*sin2B + x3*sin2C) / (sin2A+sin2B+sin2C)AyÀWà¯l
		o.x = (p[0].x*sin2A + p[1].x*sin2B + p[2].x*sin2C) / (sin2A + sin2B + sin2C);
		o.y = (p[0].y*sin2A + p[1].y*sin2B + p[2].y*sin2C) / (sin2A + sin2B + sin2C);

		
		//¬_Èºà\¦·éæ¤ÉµA¬_æ4ðlÌÜü·é
		cout << setprecision(3);
		cout << setiosflags(ios::fixed);
		cout << o.x << ' ' << o.y << ' ' << r << endl;
	}

	return 0;
}