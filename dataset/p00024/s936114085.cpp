
#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;





int main()
{
	double v;
	double h;
	int n;
	while (cin >> v) {
		n = 1;
		h = 4.9*(v / 9.8)*(v / 9.8);
		while (h > 5 * (n - 1)) {
			n++;
		}
		cout << n << endl;
	}


	return 0;
}