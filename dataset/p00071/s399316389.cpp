#include <iostream>
#include <string>
using namespace std;

const int dx[] = {0, 0, 0, 0, 0, 0, -3, -2, -1, 1, 2, 3};
const int dy[] = {-3, -2, -1, 1, 2, 3, 0, 0, 0, 0, 0, 0};
string mapInfo[8];

void solve(int x, int y)
{
	mapInfo[x][y] = '0';
	for(int i = 0; i < 12; i++)
	{
		const int X = x + dx[i];
		const int Y = y + dy[i];
		
		if(0 <= X && X < 8 && 0 <= Y && Y < 8 && mapInfo[X][Y] == '1') solve(X, Y);
	}
}

int main()
{
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			cin >> mapInfo[j];
		}
		int x, y;
		cin >> x >> y;
		
		
		solve(y - 1, x - 1);
		
		cout << "Data " << i << ":" << endl;
		for(int j = 0; j < 8; j++)
		{
			cout << mapInfo[j] << endl;
		}
	}
	
	
	return 0;
}