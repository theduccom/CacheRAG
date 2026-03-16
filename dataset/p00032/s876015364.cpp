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
	int rec = 0;
	int loz = 0;

	string s;
	for (; getline(cin, s);)
	{
		stringstream ss;
		ss << s;

		vector<int> a(3);
		for (int i = 0; i < 3; i++)
		{
			ss >> a.at(i);
			ss.ignore();
		}



		if (a.at(0) * a.at(0) + a.at(1) * a.at(1) == a.at(2) * a.at(2))
		{
			rec++;
		}
		else if (a.at(0) == a.at(1))
		{
			loz++;
		}
	}

	cout << rec << endl;
	cout << loz << endl;
}
