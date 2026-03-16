#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <utility>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

#include <cstdio>

using namespace std;

int main()
{
	int l[10], v[2];
	while (scanf("%d", &l[0]) != EOF)
	{
		vector<double> a;
		a.push_back(0);
		a.push_back(l[0]);
		for (int i = 1; i < 10; i++)
		{
			scanf(",%d", &l[i]);
			a.push_back(a.back() + l[i]);
		}
		scanf(",%d,%d", &v[0], &v[1]);
		double w = a.back() / (v[0] + v[1]);
		w *= v[0];
		for (int i = 1; i < a.size(); i++)
		{
			if (a[i] == w)
			{
				cout << i  << endl;
				break;
			}
			if (a[i]>w&&a[i - 1] < w)
			{
				cout << i << endl;
				break;
			}
		}

	}


}