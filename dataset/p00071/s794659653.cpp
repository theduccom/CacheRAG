#include<iostream>
#include<vector>
using namespace std;

#define W 8
#define H 8
#define BLANK 0
#define BOMB 1
#define BLAST 2

vector< vector<int> > map(8, vector<int>(8));

void explode(int x, int y)
{
	if (map[x][y] == BLAST) {
		return;
	} else if (map[x][y] == BLANK) {
		map[x][y] = BLAST;
		return;
	} else if (map[x][y] == BOMB) {
		map[x][y] = BLAST;
		if (x-1 >= 0) explode(x-1, y);
		if (x-2 >= 0) explode(x-2, y);
		if (x-3 >= 0) explode(x-3, y);
		if (x+1 < W) explode(x+1, y);
		if (x+2 < W) explode(x+2, y);
		if (x+3 < W) explode(x+3, y);
		if (y-1 >= 0) explode(x, y-1);
		if (y-2 >= 0) explode(x, y-2);
		if (y-3 >= 0) explode(x, y-3);
		if (y+1 < H) explode(x, y+1);
		if (y+2 < H) explode(x, y+2);
		if (y+3 < H) explode(x, y+3);
		return;
	}
}

int main()
{
	int n, count = 0;
	int x, y;
	int i, j;

	cin>>n;
	while (count++ < n) {
		cin.ignore(0xFF, '\n');
		cin.ignore(0xFF, '\n');
		for (j = 0; j < H; j++) {
			for (i = 0; i < W; i++) {
				map[i][j] = cin.get()-'0';
			}
			cin.ignore(0xFF, '\n');
		}
		cin>>x>>y;
		explode(x-1, y-1);
		cout<<"Data "<<count<<":"<<endl;
		for (j = 0; j < H; j++) {
			for (i = 0; i < W; i++)
				if (map[i][j] == BOMB) cout<<BOMB;
				else cout<<BLANK;
			cout<<endl;
		}
	}

	return 0;
}