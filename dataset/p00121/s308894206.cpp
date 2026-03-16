#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
//#define scanf scanf_s

int d[] = { -1, 1, -4, 4 };
int main()
{
	queue<pair<string, int>> q;
	q.push(make_pair("01234567", 0));
	map<string, int> map;
	map["01234567"] = 0;

	while (q.size())
	{
		string s = q.front().first;
		int n = q.front().second;
		q.pop();
		int zero = s.find("0");
		REP(i, 4)
		{
			if (zero + d[i] >= 0 && zero + d[i] < 8&&!(zero==3&&d[i]==1)&&!(zero==4&&d[i]==-1))
			{
				string tmp = s;
				swap(tmp[zero], tmp[zero + d[i]]);
				if (map.find(tmp) == map.end())
				{
					q.push(make_pair(tmp, n + 1));
					map[tmp] = n + 1;
				}
			}
		}
	}

	char c[8];
	while (cin >> c[0])
	{
		FOR(i, 1, 8) cin >> c[i];
		string ans = "";
		REP(i, 8) ans += c[i];
		cout << map[ans] << endl;
	}
	return 0;
}