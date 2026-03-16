#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int graph[128][128];
	int num;
	
	while(cin >> num)
	{
		if(!num) break;
		int count = 0;
		int all = 0, las[128];
		for(int i = 0; i < 128; i++)
			las[i] = 0;

		for(int i = 0; i < num; i++)
		{
			for(int j = 0; j < num; j++)
			{
				cin >> graph[i][j];
				count += graph[i][j];
				las[j]  += graph[i][j];
				all += graph[i][j];
				if(j == num - 1) 
				{
					graph[i][j+1] = count;
					count = 0;
				}
				if(i == num - 1)
				{
					graph[i+1][j] = las[j];
				}
				if(i == num - 1 && j == num - 1)
				{
					graph[i+1][j+1] = all;
				}
			}
		}

		for(int i = 0; i < num + 1; i++)
		{
			for(int j = 0; j < num + 1; j++)
			{
				printf("%5d", graph[i][j]);
			}
			puts("");
		}

	}
}