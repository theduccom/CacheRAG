#include <iostream>
using namespace std;

int main() {
	int map[14][14]={{0}};
	int x,y,s;
	while(scanf("%d,%d,%d",&x,&y,&s) != EOF)
	{
		x+=2;y+=2;
		switch(s)
		{
		case 3:
			map[x-2][y]++;
			map[x+2][y]++;
			map[x][y-2]++;
			map[x][y+2]++;
		case 2:
			map[x-1][y-1]++;
			map[x-1][y+1]++;
			map[x+1][y-1]++;
			map[x+1][y+1]++;
		case 1:
			map[x-1][y]++;
			map[x+1][y]++;
			map[x][y-1]++;
			map[x][y+1]++;
			map[x][y]++;
		default:
			break;
		}
	}
	int max=0,blank=0;
	for (int i=0+2; i<10+2; i++)
	{
		for (int j=0+2; j<10+2; j++)
		{
			if (map[i][j]==0)
			{
				blank++;
			} else {
				if (max<map[i][j])
				{
					max = map[i][j];
				}
			}
		}
	}
	cout << blank << endl << max << endl;
	return 0;
}