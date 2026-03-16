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
	int n;
	for (; cin >> n;)
	{
		vector<int> v;

		for (int i = 1; i <= n; i<<=1)
		{
			if (i & n)
			{
				v.push_back(i);
			}
		}

		for (int i = 0; i < v.size(); i++)
		{
			cout << v.at(i) << (i == v.size() - 1 ? "" : " ");
		}
		cout << endl;
	}
}
