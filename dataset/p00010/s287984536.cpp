#include<iostream>
#include<iomanip>
#include<cmath>

int main() {
	int n;
	std::cin >> n;
	double rax, ray, rbx, rby, rcx, rcy;
	for (int i = 0; i < n; i++) {
		double ax, ay, bx, by, cx, cy, aa, bb, cc, a, b, c, d, e, f, rx, ry, rr;
		std::cin >> rax >> ray >> rbx >> rby >> rcx >> rcy;
		ax = rbx - rax; ay = rby - ray;
		bx = rcx - rbx; by = rcy - rby;
		cx = rax - rcx; cy = ray - rcy;
		aa = ax * ax + ay * ay;
		bb = bx * bx + by * by;
		cc = cx * cx + cy * cy;
		a = std::sqrt(aa);
		b = std::sqrt(bb);
		c = std::sqrt(cc);
		d = aa * (bb + cc - aa);
		e = bb * (cc + aa - bb);
		f = cc * (aa + bb - cc);
		rx = ((d * rcx) + (e * rax) + (f * rbx)) / (d + e + f);
		ry = ((d * rcy) + (e * ray) + (f * rby)) / (d + e + f);
		rr = (a * b * c) / std::sqrt((a + b + c)*(-a + b + c)*(a - b + c)*(a + b - c));
		std::cout << std::fixed;
		std::cout << std::setprecision(3) << rx << " " << ry << " " << rr << std::endl;
	}

	return 0;
}