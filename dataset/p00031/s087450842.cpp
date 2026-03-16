#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>


using namespace std;

int main()
{
	int	w;
	while (scanf("%d", &w) != EOF)
	{
		vector<int> v;
		for (int i = 0; i < 10; ++i)
		{
			if (w & 1 << i)
				v.push_back(1<<i);
		}
		for (int i = 0; i < v.size()-1; ++i)
			printf("%d ", v[i]);
		printf("%d\n", v[v.size()-1]);
	}
	return 0;
}