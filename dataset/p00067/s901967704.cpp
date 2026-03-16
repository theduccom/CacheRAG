#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> map = vector<string>(12);
int chk[12][12];
int cnt;

void rec( int x, int y)
{
	
	if( x < 0 || x >= 12 || y < 0 || y >= 12 || chk[x][y] == 1 || map[x][y] == '0')
		return;
	
	chk[x][y] = 1;
	map[x][y] = '0';
	
	rec(x+1,y);
	rec(x-1,y);
	rec(x,y+1);
	rec(x,y-1);
	
}

int main()
{
	
	while(1)
	{
		cnt = 0;
		
		for( int i = 0; i < 12; i++)
		{	
			cin >> map[i];
			
			if(cin.eof())
				return 0;
			
			for( int j = 0; j < 12; j++)
			{
				chk[i][j] = 0;
			}
		}
		
		for(int i = 0; i < 12; i++)
		 	for(int j = 0; j < 12; j++)
			{
				if( chk[i][j] == 0 && map[i][j] == '1')
				{
					rec(i, j);
					cnt++;
				}
			}
		
		cout << cnt << endl;
		
	}
}