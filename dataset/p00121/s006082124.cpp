#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
using namespace std;
#define INF 0x3f3f3f3f
const int MAXN = 1005;
int H, W, N, dist[4] = {1,-1,4,-4};
map<string, int>Puzzle;
struct Node
{//当前位置，?数
	string s;
	int step;
};
bool check(int x)
{
	if (x >= 0 && x < 8)
	{
		return true;
	}
	return false;
}
void BFS(Node start)
{
	queue<Node>Q;
	Q.push(start);
	Puzzle.insert(make_pair(start.s, start.step));
	map<string,int>::iterator it;
	while (!Q.empty())
	{
		int index0 = 0;
		Node top, next;
		top = Q.front(); Q.pop();
		for (int i = 0; i < 8; i++)
		{
			if (top.s[i] == '0')
			{
				index0 = i;
				break;
			}
		}
		if (index0 == 3)
		{
			next.s = top.s; next.step = top.step + 1;
			swap(next.s[index0], next.s[index0 - 1]);
			it = Puzzle.find(next.s);
			if (it == Puzzle.end())
			{
				Puzzle.insert(make_pair(next.s, next.step));
				Q.push(next);
			}
			next.s = top.s; next.step = top.step + 1;
			swap(next.s[index0], next.s[index0 + 4]);
			it = Puzzle.find(next.s);
			if (it == Puzzle.end())
			{
				Puzzle.insert(make_pair(next.s, next.step));
				Q.push(next);
			}
		}
		else if (index0 == 4)
		{
			next.s = top.s; next.step = top.step + 1;
			swap(next.s[index0], next.s[index0 + 1]);
			it = Puzzle.find(next.s);
			if (it == Puzzle.end())
			{
				Puzzle.insert(make_pair(next.s, next.step));
				Q.push(next);
			}
			next.s = top.s; next.step = top.step + 1;
			swap(next.s[index0], next.s[index0 - 4]);
			it = Puzzle.find(next.s);
			if (it == Puzzle.end())
			{
				Puzzle.insert(make_pair(next.s, next.step));
				Q.push(next);
			}
		}
		else
		{
			for (int j = 0; j < 4; j++)
			{
				next.s = top.s; next.step = top.step + 1;
				if (check(index0 + dist[j]))
				{
					swap(next.s[index0], next.s[index0 + dist[j]]);
					it = Puzzle.find(next.s);
					if (it == Puzzle.end())
					{
						Puzzle.insert(make_pair(next.s, next.step));
						Q.push(next);
					}
				}
			}
		}
	}
}
void init()
{
	Node start;
	start.s = "01234567";
	start.step = 0;
	BFS(start);
}
int main()
{
	init();
	int num;
	while (scanf("%d",&num)!=EOF)
	{
		string ss;
		ss += num + '0';
		for (int i = 1; i < 8; i++)
		{
			scanf("%d", &num);
			ss += num + '0';
		}
		printf("%d\n",Puzzle.find(ss)->second);
	}
	return 0;
}