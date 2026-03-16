#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<list>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	double x = 0, y = 0, rad = 90 * M_PI / 180;
	int a, b;
	while (scanf("%d,%d", &a, &b) && (a || b)) {
		x += a*cos(rad);
		y += a*sin(rad);
		//????????????
		rad -= b*M_PI / 180;
	}
	cout << (int)x << endl << (int)y << endl;
	return 0;
}