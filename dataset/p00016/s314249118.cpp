#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define PI 3.141592

int d, t;
double x, y, deg;

int main() {
	x = 0;
	y = 0;
	deg = 90;

	scanf("%d,%d", &d, &t);
	while (!(d == 0 && t == 0)) {
		x += d * sin((double)deg / 180 * PI);
		y += d * cos((double)deg / 180 * PI);
		deg -= t;
		scanf("%d,%d", &d, &t);
	}
	cout << (int)y << endl;
	cout << (int)x << endl;

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/