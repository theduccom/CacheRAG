#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

map<string, int> dp;
int direction[4] = { 1, -1, 4, -4 };
void bfs()
{
	queue<string> que;
	que.push("01234567");
	dp["01234567"] = 0;
	while (!que.empty())
	{
		string now = que.front(); que.pop();
		// p是'0'的位置
		int p = 0;
		for (int j = 0; j < 8; ++j)
		{
			if (now[j] == '0')
			{
				p = j;
				break;
			}
		}

		for (int i = 0; i < 4; ++i)
		{
			int n = p + direction[i];
			if (0 <= n && n < 8 &&
				!(p == 3 && i == 0) && 
				!(p == 4 && i == 1))
			{
				string next = now;
				swap(next[p], next[n]);
				if (dp.find(next) == dp.end())
				{
					dp[next] = dp[now] + 1;
					que.push(next);
				}
			}
		}
	}
}

int main() {
	bfs();
	string a="        ";
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7]) {
		cout << dp[a] << endl;
	}
	//system("pause");
	return 0;
}