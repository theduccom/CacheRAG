//??-2015-11-8
# include <cstdio>
# include <algorithm>
# include <iostream>
# include <string>
# include <cstring>
# include <map>
# include <queue>

using namespace std;

int direction[4] = { -4, 4, -1, 1 };                   //4个方向，上下左右
map<string, int>dp;                                   //事先将?果保存在?里
void Bfs()
{
	string p = "01234567";
	queue<string>Q;
	Q.push(p);
	dp[p] = 0;                                          //在?个地方是不用??的

	while (!Q.empty())
	{
		//printf("出不去\n");
		string q = Q.front();
		Q.pop();
		int v,w,i,j;
		for (v = 0; v < q.length(); v++)
		{
			if (q[v] == '0')
			{
				w = v;                                       //??0的位置，然后以他?中心?行走?
				break;
			}
		}
		for (i = 0; i < 4; i++)
		{
			string temp2 = q;
			int r = w + direction[i];
			if (r >= 0 && r < 8 && !(w == 3 && i == 3) && !(w == 4 && i == 2))         //特?看清楚?个限制条件
			{
				char c;                                                                //交?位置
				c = temp2[r];
				temp2[r] = temp2[w];
				temp2[w] = c;
				//必?要是map中没有的，?才??列，要不永不停止
				if (dp.find(temp2) == dp.end())                        //没找到,一定要想?法知道是否已??找?
				{
					Q.push(temp2);
					dp[temp2] = dp[q] + 1;
				}
			}
		}
	}
}
int main(void)
{
	//freopen("in.txt", "r", stdin);
	string s;
	Bfs();
	while (getline(cin, s))
	{
		int i;
		string temp;
		for (i = 0; i < s.length(); i++)
		{
			if (s[i] != ' ')
				temp.push_back(s[i]);
		}
		cout << dp[temp] << endl;
	}
	return 0;
}