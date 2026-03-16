#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
const int INF = 1 << 20;

using namespace std;

int go[32][32], dict[32];
bool node[32];
char cn1, cn2, cn3;

int main()
{
	int num, total, wk, tk, kt, kr;

	//input start
	cin >> total >> num;

	for(int i = 0; i < total; i++)
	{
		dict[i] = INF;
		node[i] = false;
		for(int j = 0; j < total; j++)
		{
			go[i][j] = INF;
		}
	}

	for(int i = 0; i < num; i++)
	{
		cin >> wk >> cn1 >> tk >> cn2 >> kt >> cn3 >> kr;

		go[wk-1][tk-1] = kt;
		go[tk-1][wk-1] = kr;
	}

	int start, goal, exp, rew;
	cin >> start >> cn1>> goal >> cn2 >> rew >> cn3 >> exp;

	//input end
	
	//go dijkstra
	dict[start - 1] = 0;
	rew -= exp;
	
	while(1)
	{
		int v = -1;

		for(int i = 0; i < total; i++)
		{
			if(!node[i] && (v == -1 || dict[i] < dict[v])) v = i;
		}

		if(v == -1) break;

		node[v] = true;

		for(int i = 0; i < total; i++)
		{
			dict[i] = min(dict[i], dict[v] + go[v][i]);
		}
	
	}

	rew -= dict[goal -1];

	for(int i = 0; i < total; i++)
	{
		node[i] = false;
		dict[i] = INF;
	}

	//back dijkstra
	dict[goal - 1] = 0;
	while(1)
	{
		int v = -1;
		for(int i = 0; i < total; i++)
		{
			if(!node[i] && (v == -1 || dict[i] < dict[v]) ) v = i;
		}

		if(v == -1) break;

		node[v] = true;

		for(int i = 0; i < total; i++)
		{
			dict[i] = min(dict[i], dict[v] + go[v][i]);
		}
	}

	rew -= dict[start -1];

	cout << rew << endl;
}