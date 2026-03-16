#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

map<string, int>dp;
int dir[4] = {1, -1, 4, -4};

void Swap(char &p, char &q)
{
	char t = q;
	q = p;
	p = t;
}

void bfs()
{
	int i, x, q;
	queue<string>que;
	que.push("01234567");
	dp["01234567"] = 0;
	while (!que.empty())
	{
		string p = que.front();
		que.pop();
		for (x = 0; x < 8; x++)
			if (p[x] == '0')
				break;
		for (i = 0; i < 4; i++)
		{
			q = x + dir[i];
			if (q >= 0 && q < 8 && !(x == 3 && i == 0) && !(x == 4 && i == 1))
			{
				string pp = p;
				Swap(pp[q], pp[x]);				
				if (dp.find(pp) == dp.end())
				{
					dp[pp] = dp[p] + 1;
					que.push(pp);
				}
			}
		}
	}
}

int main()
{
	bfs();
	string ss;
	char s[100];
	int i, j;
	while (gets(s) != NULL)
	{
		for (i = j = 0; s[i]; i++)
			if (s[i] >= '0' && s[i] <= '9')
				ss = ss + s[i];
		printf("%d\n", dp[ss]);
		ss.erase(ss.begin(), ss.end());
	}
	return 0;
}