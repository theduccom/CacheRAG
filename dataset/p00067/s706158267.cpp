// 2011/04/06 Tazoe

#include <iostream>
using namespace std;

void DFS(char map[14][14], int i, int j)
{
	map[i][j] = '3';

	if(map[i][j+1]=='1')
		DFS(map, i, j+1);
	if(map[i+1][j]=='1')
		DFS(map, i+1, j);
	if(map[i][j-1]=='1')
		DFS(map, i, j-1);
	if(map[i-1][j]=='1')
		DFS(map, i-1, j);
}

int main()
{
	while(true){
		char map[14][14];
		for(int i=0; i<14; i++)
			for(int j=0; j<14; j++)
				map[i][j] = '2';

		cin >> map[1][1];
		if(cin.eof())
			break;

		for(int i=1; i<=12; i++)
			for(int j=1; j<=12; j++)
				if(i==1&&j==1)
					continue;
				else
					cin >> map[i][j];

		int cnt = 0;
		for(int i=1; i<=12; i++)
			for(int j=1; j<=12; j++)
				if(map[i][j]=='1'){
					cnt++;
					DFS(map, i, j);
				}

		cout << cnt << endl;
	}

	return 0;
}