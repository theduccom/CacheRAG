#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

class Puzzle
{
public:
	string s;
	int count;
};

int main()
{
	int d[4] = { 1, -1, 4, -4 };
	map<string, int> memo;
	queue<Puzzle> que;
	Puzzle target;
	target.s = "01234567";
	target.count = 0;
	que.push(target);
	memo[target.s] = target.count;

	while (!que.empty())
	{
		Puzzle p = que.front();
		que.pop();
		int zeroPos = p.s.find('0');
		for (int i = 0; i < 4; i++)
		{
			if (zeroPos % 4 == 0 && i == 1) continue;
			if (zeroPos % 4 == 3 && i == 0) continue;
			if (!(0 <= zeroPos + d[i] && zeroPos + d[i] < 8)) continue;
			Puzzle next = p;
			next.count++;
			swap(next.s[zeroPos], next.s[zeroPos + d[i]]);
			if (memo.count(next.s)) continue;
			memo[next.s] = next.count;
			que.push(next);
		}
	}

	while (true)
	{
		string str;
		char c;
		for (int i = 0; i < 8; i++)
		{
			if (!(cin >> c)) return 0;
			str.push_back(c);
		}
		cout << memo[str] << endl;
	}

	return 0;
}