#include<iostream>
#include<cmath>
using namespace std;
struct Circle { long double x, y, r; };
int solve(Circle c, Circle d) {
	long double dist = (c.x - d.x)*(c.x - d.x) + (c.y - d.y)*(c.y - d.y);
	dist = sqrt(dist);
	long double dist2 = d.r + dist;
	if (dist2 < c.r) { return 2; }
	long double dist3 = c.r + dist;
	if (dist3 < d.r) { return -2; }
	long double dist4 = c.r + d.r;
	if (dist4 < dist) { return 0; }
	return 1;
}
int main() {
	Circle a, b; int n; cin >> n;
	for (int i = 0; i < n;i++){
		cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;
		cout << solve(a, b) << endl;
	}
	return 0;
}