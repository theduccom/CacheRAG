#include<iostream>
#include<vector>
#include<string>

using namespace std;

int judge[128][128];

int main()
{
	char f[128][128];

	int w, h, i, j, ex, ey;

	while(cin >> h >> w, w || h)
	{
		i = 0; j = 0;

		for(int k = 0; k < h; k++)
		{
			cin >> f[k];
			for(int l = 0; l < w; l++)
			{
				judge[k][l] = 0;
			}
		}
		while(1)
		{
			if(judge[i][j] == 1)
			{
				ex = -1; ey = -1;
				break;
			}
			else if(f[i][j] == '.')
			{
				ex = j; ey = i;
				break;
			}

			judge[i][j] = 1;

			if(f[i][j] == '>')
			{
				++j;
			}
			else if(f[i][j] == '<')
			{
				--j;
			}
			else if(f[i][j] == '^')
			{
				--i;
			}
			else if(f[i][j] == 'v')
			{
				++i;
			}
		}

		if(ex == -1 && ey == -1)
		{
			cout << "LOOP" << endl;
		}
		else
		{
			cout << ex << ' ' << ey << endl;
		}
	}
}