#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
using namespace std;

int main(){
	int x, r;
	char split;
	double cx = 0.0;
	double cy = 0.0;
	int cr = 0;
	while (cin >> x >> split >> r) {
		if (x == 0 && r == 0) break;
		cx += x * sin(cr * M_PI / 180.0);
		cy += x * cos(cr * M_PI / 180.0);
		cr += r;
	}
	cout << static_cast<int>(cx) << endl;
	cout << static_cast<int>(cy) << endl;

	return 0;
}