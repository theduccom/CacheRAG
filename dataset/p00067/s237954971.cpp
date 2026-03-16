#include<iostream>
#include<vector>

using namespace std;

int field[13][13];
int cont = 0;
int dx[] = {0, 1, 0, -1} , dy[] = {1, 0, -1, 0};
int dfs(int sx, int sy)
{
	if(field[sy][sx])
	{
		field[sy][sx] = 0;
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				int nx = sx + dx[i] , ny = sy + dy[i];

				if(nx >= 0 && ny >= 0 && ny < 12 && nx < 12 && field[ny][nx] == 1)
				{
					dfs(nx, ny);
				}
			}
		}
	}
}

int main()
{
	int cont = 0;
	int sx, sy;
	char w;
	while(cin >> w)
	{
		//cin.ignore();
		//field[0][0] = w - '0';
		for(int i = 0; i < 12; i++)
		{
			for(int j = 0; j < 12; j++)
			{
				if(i != 0 || j != 0) cin >> w;
				field[i][j] = w - '0';
			}
		}
		for(int i = 0; i < 12; i++)
		{
			for(int j = 0; j < 12; j++)
			{
				if(field[i][j] == 1)
				{
					dfs(j, i);
					cont++;
				}
			}
		}
		cout << cont << endl;
		cont = 0;
	}
}