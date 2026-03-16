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
#include <sstream>
#include <climits>
#include <cfloat>

typedef long long ll;

using namespace std;


int main()
{
	map<int, int> memo;
	int p = 1234567;
	memo[p] = 0;
	queue<int> q;
	q.push(p);
	while (!q.empty())
	{
		int prev = q.front();
		q.pop();

		int puzzle[8];
		int t = prev;
		for (int i = 7; i >= 0; --i, t /= 10)
			puzzle[i] = t % 10;

		int zeroPos;
		for (zeroPos = 0; puzzle[zeroPos]; ++zeroPos)
			;

		const int d[] = { -1, 1, 4, -4 };
		for (int i = 0; i < 4; ++i)
		{
			int swapPos = zeroPos + d[i];
			if (swapPos < 0 || swapPos >= 8
				|| zeroPos == 3 && d[i] == 1
				|| zeroPos == 4 && d[i] == -1)
				continue;

			int copy[8];
			memcpy(copy, puzzle, sizeof(copy));
			swap(copy[zeroPos], copy[swapPos]);
			int next = 0;
			for (int j = 0; j < 8; ++j)
				next = next*10 + copy[j];

			if (!memo.count(next))
			{
				memo[next] = memo[prev] + 1;
				q.push(next);
			}
		}
	}
	while (true)
	{
		char buf[128];
		cin.getline(buf, sizeof(buf));
		if (strlen(buf) == 0)
			break;
		istringstream is(buf);
		int p = 0;
		for (int i = 0; i < 8; ++i)
		{
			int t;
			is >> t;
			p = p*10 + t;
		}
		printf("%d\n", memo[p]);
	}

	return 0;
}