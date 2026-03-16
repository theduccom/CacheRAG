#include <bits/stdc++.h>

using namespace std;

int main() {
	int s, r;
	double x = 0, y = 0, rad = M_PI / 2.0;
	while (scanf("%d,%d", &s, &r), s || r) {
		x += s * cos(rad);
		y += s * sin(rad);
		rad -= r * M_PI / 180;   // 時計回り
	}
	cout << (int)x << endl << (int)y << endl;
}