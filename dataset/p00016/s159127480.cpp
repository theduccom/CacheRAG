#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	double x = 0, y = 0;
	double dist, ang = 0, d;
	while (scanf("%lf,%lf", &dist, &d), dist || d) {
		x += sin(ang*M_PI / 180)*dist;
		y += cos(ang*M_PI / 180)*dist;
		ang += d;
	}
	cout << (int)x << endl << (int)y << endl;
}