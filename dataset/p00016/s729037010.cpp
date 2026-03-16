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
	double x = 0, y = 0;
	double ang = 90;
	for (;;)
	{
		string str;
		cin >> str;

		stringstream ss;
		ss << str;

		double d, a;
		ss >> d;
		ss.ignore();
		ss >> a;

		double rad = ang * M_PI / 180.0;
		x += d * cos(rad);
		y += d * sin(rad);

		if (d == 0 && a == 0)
		{
			break;
		}
		ang -= a;
	}

	cout << (int)x << endl;
	cout << (int)y << endl;
}
