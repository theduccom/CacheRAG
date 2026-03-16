#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	double t, v, h, f;
	while (cin >> v) {
		t = v / 9.8;
		h = 4.9 * t * t;
		f = ceil(h / 5 + 1);
		cout << f << endl;
	}
}