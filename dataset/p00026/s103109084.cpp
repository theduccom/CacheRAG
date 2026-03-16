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
	const int N = 10;
	vector<vector<int>> map(N, vector<int>(N));

	vector<vector<int>> s1 =
	{
		{ 0, 1, 0 },
		{ 1, 1, 1 },
		{ 0, 1, 0 } ,
	};
	vector<vector<int>> s2 =
	{
		{ 1, 1, 1 },
		{ 1, 1, 1 },
		{ 1, 1, 1 },
	};
	vector<vector<int>> s3 =
	{
		{ 0, 0, 1, 0, 0},
		{ 0, 1, 1, 1, 0 },
		{ 1, 1, 1, 1, 1 },
		{ 0, 1, 1, 1, 0 },
		{ 0, 0, 1, 0, 0 },
	};


	string s;
	for (; getline(cin, s);)
	{
		stringstream ss;
		ss << s;

		int x;
		ss >> x;
		ss.ignore();
		int y;
		ss >> y;
		ss.ignore();
		int s;
		ss >> s;

		vector<vector<int>> sn;
		switch (s)
		{
			case 1:
				sn = s1;
				break;
			case 2:
				sn = s2;
				break;
			case 3:
				sn = s3;
				break;
		}

		for (int i = 0; i < sn.size(); i++)
		{
			int y0 = i + y - sn.size() / 2;
			if (y0 < 0 || y0 >= N)
			{
				continue;
			}
			for (int j = 0; j < sn.size(); j++)
			{
				int x0 = j + x - sn.size() / 2;
				if (x0 < 0 || x0 >= N)
				{
					continue;
				}
				map.at(y0).at(x0) += sn.at(i).at(j);
			}
		}
	}

	int maxd = 0;
	int dr = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map.at(i).at(j) > 0)
			{
				dr++;
				maxd = max(maxd, map.at(i).at(j));
			}
		
		}
	}

	cout << 100 - dr << endl;
	cout << maxd << endl;
}
