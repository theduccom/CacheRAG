#include <iostream>
#include<string>
#include<queue>
#include<map>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100
typedef unsigned int UINT;
typedef long long ll;

char num;
string str;

int main()
{
	map<string, int> used;
	queue<string> zero;
	zero.push("01234567");

	while (!zero.empty())
	{
		string tmp;
		tmp = zero.front();
		zero.pop();

		int posi_zero = tmp.find("0");
		if (0 == tmp.find("0"))
		{
			int dx[] = { 1, 4 };
			REP(i, 2)
			{
				string tmp1 = tmp;
				swap(tmp1[0], tmp1[dx[i]]);
				if (used.find(tmp1) == used.end())
				{
					used[tmp1] = used[tmp] + 1;
					zero.push(tmp1);
				}

			}
		}
		else if (tmp.find("0") == 1 || posi_zero == 2)
		{
			int dx[] = { -1, 1, 4 };
			REP(i, 3)
			{
				string tmp1 = tmp;
				swap(tmp1[posi_zero], tmp1[posi_zero + dx[i]]);
				if (used.find(tmp1) == used.end())
				{
					used[tmp1] = used[tmp] + 1;
					zero.push(tmp1);
				}

			}
		}
		else if (tmp.find("0") == 3)
		{
			int dx[] = { -1, 4 };
			REP(i, 2)
			{
				string tmp1 = tmp;
				swap(tmp1[posi_zero], tmp1[posi_zero + dx[i]]);
				if (used.find(tmp1) == used.end())
				{
					used[tmp1] = used[tmp] + 1;
					zero.push(tmp1);
				}

			}
		}
		else if (tmp.find("0") == 4)
		{
			int dx[] = { 1, -4 };
			REP(i, 2)
			{
				string tmp1 = tmp;
				swap(tmp1[posi_zero], tmp1[posi_zero + dx[i]]);
				if (used.find(tmp1) == used.end())
				{
					used[tmp1] = used[tmp] + 1;
					zero.push(tmp1);
				}

			}
		}
		else if (tmp.find("0") == 5 || posi_zero == 6)
		{
			int dx[] = { -1, 1, -4 };
			REP(i, 3)
			{
				string tmp1 = tmp;
				swap(tmp1[posi_zero], tmp1[posi_zero + dx[i]]);
				if (used.find(tmp1) == used.end())
				{
					used[tmp1] = used[tmp] + 1;
					zero.push(tmp1);
				}

			}
		}
		else if (tmp.find("0") == 7)
		{
			int dx[] = { -1, -4 };
			REP(i, 2)
			{
				string tmp1 = tmp;
				swap(tmp1[posi_zero], tmp1[posi_zero + dx[i]]);
				if (used.find(tmp1) == used.end())
				{
					used[tmp1] = used[tmp] + 1;
					zero.push(tmp1);
				}

			}
		}

	}


	while (cin >> num)
	{
		str.push_back(num);
		REP(i, 7)
		{
			cin >> num;
			str.push_back(num);

		}
		cout << used[str] << endl;
		str.clear();
		
	}
	return 0;
}