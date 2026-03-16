#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <climits>
#include <cfloat>


typedef long long ll;


using namespace std;

int main()
{
	while (true)
	{
		int n;
		scanf("%d", &n);
		if (n == 0) break;

		vector<int> order;
		map<int, ll> sale;
		while (n--)
		{
			int no, value, num;
			scanf("%d %d %d", &no, &value, &num);
			if (!sale[no])
				order.push_back(no);

			sale[no] += (ll)value * num;
		}
		bool any = false;
		for (int i = 0; i < order.size(); ++i)
		{
			if (sale[order[i]] >= 1000000)
			{
				printf("%d\n", order[i]);
				any = true;
			}
		}
		if (!any)
			printf("NA\n");
	}

	return 0;
}