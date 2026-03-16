#include <stdio.h>
#include <algorithm>
using namespace std;

int table[1005][1005];
int weight[1000];
int value[1000];
int w;
int n;
int Case = 0;

int main()
{
	while(true)
	{
		Case++;
		
		scanf("%d", &w);
		if(w == 0) break;
		scanf("%d", &n);
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d,%d", &value[i], &weight[i]);
		}
		
		for(int i = 0; i <= n; i++)
		{
			for(int j = 0; j <= w; j++)
			{
				table[i][j] = -1;
			}
		}
		
		table[0][0] = 0;
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j <= w; j++)
			{
				if(table[i][j] == -1) continue;
				table[i + 1][j] = max(table[i + 1][j], table[i][j]);
				if(j + weight[i] <= w)
				{
					table[i + 1][j + weight[i]] = max(table[i + 1][j + weight[i]], table[i][j] + value[i]);
				}
			}
		}
		
		int ansValue = 0;
		int ansWeight;
		for(int i = 0; i <= w; i++)
		{
			if(ansValue < table[n][i])
			{
				ansValue = table[n][i];
				ansWeight = i;
			}
		}
		
		printf("Case %d:\n", Case);
		printf("%d\n%d\n", ansValue, ansWeight);
	}
	
	return 0;
}