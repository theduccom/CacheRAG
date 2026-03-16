#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int l[10];
	double v1, v2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%lf,%lf", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2) != EOF) {
		double d = 0, g;
		for(int i = 0; i < 10; ++i) {
			d += l[i];
		}
		g = d * v1 / (v1 + v2);
		int s = 0, sum = 1;
		for(int i = 0; i < 10; ++i, ++sum) {
			s += l[i];
			if(s >= g) {
				cout << sum << endl;
				break;
			}
		}
	}
}