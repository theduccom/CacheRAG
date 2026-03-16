#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	double v;
	for (; cin >> v;)
	{
		double y = 4.9 * pow(v / 9.8, 2);

		cout << (int)(y / 5 + 2) << endl;
	}
}
