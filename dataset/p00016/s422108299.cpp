#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	double PI = 4 * atan(1);
	int l, t1, t2 = 0, c = 0;
	double x = 0, y = 0;
	while(scanf("%d,%d", &l, &t1) && (l != 0 || t1 != 0)){
		x += (double)l * sin(PI * (double)t2 / 180);
		y += (double)l * cos(PI * (double)t2 /180);
		t2 += t1;
	}
	cout << (int)x << endl;
	cout << (int)y << endl;
}