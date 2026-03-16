#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() 
{
	int x, h;
	double S;
	while (1) {
		cin >> x;
		cin >> h;
		if (x == 0 && h == 0) {
			break;
		}
		S = x * x + 4 * 0.5 * x * sqrt(x * 0.5 * x * 0.5 + h * h);
		cout << fixed << setprecision(6) << S << endl;
	}
	return 0;
}
