#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	double height;
	double maxs = -1.0, mins = 1.0e18;
	while (scanf("%lf", &height) != EOF) {
		if (maxs < height) maxs = height;
		if (mins > height) mins = height;
	}
	printf ("%.1lf\n", maxs - mins);
//	system("PAUSE");
	return 0;
}