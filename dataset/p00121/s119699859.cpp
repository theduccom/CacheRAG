#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <string.h>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

struct node
{
	int number;
	int dist;

	node(int number , int dist)
	{
		this -> number = number;
		this -> dist = dist;
	}
};

int input[2][4];
int res[100010];
int dx[4] = {- 1 , 0 , 1 , 0};
int dy[4] = {0 , 1 , 0 , - 1};
queue<node> q;

// ??¶???
int fact(int n)
{
	int ans = 1;
	for (int i = 1;i <= n;i ++)
		ans = ans * i;
	return ans;
}

// ????????¬?????°???
int toNumber()
{
	// ?????¬????????´??°???
	int temp[8];
	int i , j , next = 0 , number = 0;
	for (i = 0;i < 2;i ++)
		for (j = 0;j < 4;j ++)
		{
			temp[next] = input[i][j];
			next ++;
		}

	// ????????????
	for (i = 0;i < 8;i ++)
	{
		int tot = 0;
		for (j = i + 1;j < 8;j ++)
		{
			if (temp[j] < temp[i])
				tot ++;
		}
		number += tot * fact(8 - i - 1);
	}
	return number + 1;
}

// ??°?????¬???2 x 4?????°???
void toArray(int number)
{
	// ???????????????
	number --;

	int temp[8];
	bool vis[8];
	memset(vis , false , sizeof(vis));

	int next = 0;
	for (int i = 0;i < 8;i ++)
	{
		int f = fact(8 - i - 1) , count = 0 , v;
		int value = number / f;		// ?¬¬value??????
		number = number % f;
		for (int j = 0;j < 8;j ++)
		{
			if (!vis[j])
			{
				if (count == value)
				{
					v = j;
					vis[j] = true;
					break;
				}
				count ++;
			}
		}
		temp[i] = v;
	}
	// temp??¬???input
	for (int i = 0;i < 2;i ++)
		for (int j = 0;j < 4;j ++)
		{
			input[i][j] = temp[next];
			next ++;
		}
}

bool inArea(int x , int y)
{
	return x >= 0 && x < 2 && y >= 0 && y < 4;
}

// ??????bfs????´¢
void bfs()
{
	while (!q.empty())
		q.pop();

	// input??¬???number
	q.push(node(1 , 0));
	res[1] = 0;

	int count = 0;
	while (!q.empty())
	{
		node no = q.front();
		q.pop();

		toArray(no.number);

		for (int i = 0;i < 2;i ++)
			for (int j = 0;j < 4;j ++)
			{
				// ?????°0
				if (input[i][j] == 0)
				{
					for (int k = 0;k < 4;k ++)
					{
						int x1 = i , y1 = j , x2 = x1 + dx[k] , y2 = y1 + dy[k] , temp , number;
						// ????????¨?????´??????
						if (inArea(x2 , y2))
						{
							// ?????¢(x1,y1)???(x2,y2)??????
							temp = input[x1][y1];
							input[x1][y1] = input[x2][y2];
							input[x2][y2] = temp;

							number = toNumber();

							if (res[number] < 0)
							{
								res[number] = no.dist + 1;
								q.push(node(number , no.dist + 1));
							}

							temp = input[x1][y1];
							input[x1][y1] = input[x2][y2];
							input[x2][y2] = temp;
						}
					}
				}
			}
	}
}

int main()
{
	memset(res , - 1 , sizeof(res));
	bfs();
	int i , j;
	while (scanf("%d" , &input[0][0]) != EOF)
	{
		for (i = 1;i < 4;i ++)
			scanf("%d" , &input[0][i]);
		for (i = 0;i < 4;i ++)
			scanf("%d" , &input[1][i]);

		int number = toNumber();

		printf("%d\n" , res[number]);
	}
	return 0;
}