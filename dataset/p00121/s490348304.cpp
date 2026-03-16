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
	string s;
	int dist;

	node(string s , int dist)
	{
		this -> s = s;
		this -> dist = dist;
	}
};

int input[10];
map<string , int> m;
queue<node> q;

string swap(string s , int index1 , int index2)
{
	string ans = "";
	for (int i = 0;i < s.length();i ++)
	{
		if (i == index1)
			ans = ans + s[index2];
		else if (i == index2)
			ans = ans + s[index1];
		else
			ans = ans + s[i];
	}
	return ans;
}

void bfs()
{
	q.push(node("01234567" , 0));
	m["01234567"] = 0;

	int count = 0;
	while (!q.empty())
	{
		node no = q.front();
		q.pop();
		count ++;

		int i;
		for (i = 0;i < 8;i ++)
		{
			if (no.s[i] == '0')
				break;
		}
		// ?????¢i + 1 , i + 4
		if (i + 1 < 8 && (i + 1) % 4 != 0)
		{	
			string newStr = swap(no.s , i , i + 1);

			if (m.find(newStr) == m.end())
			{
				m[newStr] = no.dist + 1;
				q.push(node(newStr , no.dist + 1));
			}
		}

		if (i - 1 >= 0 && (i % 4 != 0))
		{
			string newStr = swap(no.s , i , i - 1);

			if (m.find(newStr) == m.end())
			{
				m[newStr] = no.dist + 1;
				q.push(node(newStr , no.dist + 1));
			}
		}

		if (i + 4 < 8)
		{
			string newStr = swap(no.s , i , i + 4);

			if (m.find(newStr) == m.end())
			{
				m[newStr] = no.dist + 1;
				q.push(node(newStr , no.dist + 1));
			}
		}

		if (i - 4 >= 0)
		{
			string newStr = swap(no.s , i , i - 4);

			if (m.find(newStr) == m.end())
			{
				m[newStr] = no.dist + 1;
				q.push(node(newStr , no.dist + 1));
			}
		}
	}
}

char toChar(int number)
{
	return (char) (number + '0');
}

int main()
{
	bfs();
	int i , j;
	while (scanf("%d" , &input[0]) != EOF)
	{
		string s;
		for (i = 1;i < 8;i ++)
			scanf("%d" , &input[i]);
		for (i = 0;i < 8;i ++)
			s = s + toChar(input[i]);

		printf("%d\n" , m[s]);
	}
	return 0;
}