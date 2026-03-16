#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

#define MAX_N 25

int n;

int map[8][8];
int bombx, bomby;

queue<int> queint;
queue<char> quechar;

int vx[] = { 1, 0, -1, 0, 2, 0, -2, 0, 3, 0, -3, 0 };
int vy[] = { 0, 1, 0, -1, 0, 2, 0, -2, 0, 3, 0, -3 };

void solve(int bx,int by){
	for (int i = 0; i < 12; i++){
		if (bx + vx[i] >= 0 && bx + vx[i] < 8 &&
			by + vy[i] >= 0 && by + vy[i] < 8){
			if (map[bx + vx[i]][by + vy[i]] == 1){
				map[bx + vx[i]][by + vy[i]] = 0;
				solve(bx + vx[i], by + vy[i]);
			}
		}
	}
}

int main(){
	int m;
	char c;

	cin >> m;
	for (int j = 0; j < m; j++){
		for (int i = 0; i < 8; i++){
			for (int k = 0; k < 8; k++){
				cin >> c;
				quechar.push(c);
			}
		}
		cin >> n;
		queint.push(n);
		cin >> n;
		queint.push(n);
	}
	for (int i = 0; i < m; i++){
		for (int y = 0; y < 8; y++){
			for (int x = 0; x < 8; x++){
				map[x][y] = quechar.front() - '0';
				quechar.pop();
			}
		}
		bombx = queint.front()-1; queint.pop();
		bomby = queint.front()-1; queint.pop();

		//????????????
		map[bombx][bomby] = 0;
		solve(bombx,bomby);
		cout << "Data " << i+1 << ":" << endl;
		for (int y = 0; y < 8; y++)
		{
			for (int x = 0; x < 8; x++)
			{
				cout << map[x][y];
			}
			cout << endl;
		}

	}

	return 0;
}