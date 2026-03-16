#include <bits/stdc++.h>

const static double	de_PI	= 3.14159265358979323846;
const static int	de_MOD	= 1000000007;
const static int	de_MAX	= 999999999;
const static int	de_MIN = -999999999;

inline double RoundOff(double a, const int n) {

	for (int i = 0; i < n - 1; i++) { a *= 10; }

	if (a > 0) { a += 0.5; }
	else { a -= 0.5; }

	a = static_cast<int>(a);

	for (int i = 0; i < n - 1; i++) { a /= 10; }

	return a;
}

inline double circumradius(std::complex<double> a, std::complex<double> b, std::complex<double> c) {

	//???
	double eAB = abs(b - a);
	double eBC = abs(c - b);
	double eCA = abs(a - c);

	//?§????(????????????)
	double aCAB = acos((eCA*eCA + eAB*eAB - eBC*eBC) / (2 * eCA*eAB));

	//?????\????????????(??£?????????)
	double R = 0.5*eBC / sin(aCAB);

	return(R);

}

inline std::complex<double> Circumcenter(std::complex<double> a, std::complex<double> b, std::complex<double> c) {

	//???
	double eAB = abs(b - a);
	double eBC = abs(c - b);
	double eCA = abs(a - c);

	//?§????(????????????)
	double aCAB = acos((eCA*eCA + eAB*eAB - eBC*eBC) / (2 * eCA*eAB));
	double aABC = acos((eAB*eAB + eBC*eBC - eCA*eCA) / (2 * eAB*eBC));
	double aBCA = acos((eBC*eBC + eCA*eCA - eAB*eAB) / (2 * eBC*eCA));

	double A = sin(2 * aCAB);
	double B = sin(2 * aABC);
	double C = sin(2 * aBCA);

	//???????????????????????????(?????????????????¢???????????¬???)
	std::complex<double> ans;
	ans.real((A*a.real() + B*b.real() + C*c.real()) / (A + B + C));
	ans.imag((A*a.imag() + B*b.imag() + C*c.imag()) / (A + B + C));

	return(ans);
}

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int n = 0;
	std::cin >> n;
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;

	std::complex<double> a, b, c, ans;
	double r = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		a.real(x1);	a.imag(y1);
		b.real(x2);	b.imag(y2);
		c.real(x3);	c.imag(y3);
		ans = Circumcenter(a, b, c);
		r = circumradius(a, b, c);
		std::cout << std::fixed << std::setprecision(3) << RoundOff(ans.real(), 4);
		std::cout << " ";
		std::cout << std::fixed << std::setprecision(3) << RoundOff(ans.imag(), 4);
		std::cout << " ";
		std::cout << std::fixed << std::setprecision(3) << RoundOff(r, 4) << std::endl;
	}



}