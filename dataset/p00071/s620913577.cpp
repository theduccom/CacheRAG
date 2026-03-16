#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9;

int dx[] = {1, 2, 3, -1, -2, -3, 0, 0, 0, 0, 0, 0};
int dy[] = {0, 0, 0, 0, 0, 0, 1, 2, 3, -1, -2, -3};

vector<int> maze[8];

void search(int x, int y){
	for(int i = 0; i < 12; ++i){
		int nx = x + dx[i], ny = y + dy[i];
		if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && maze[ny][nx] == 1){
			maze[ny][nx] = 0;
			search(nx, ny);
		}
	}
	return;
}

int main() {
	int n, sx, sy;
	cin >> n;
	string s;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < 8; ++j){
			cin >> s;
			for(int k = 0; k < 8; ++k)
				maze[j].push_back(s[k] - '0');
		}
		cin >> sx >> sy;
		sx--; sy--;
		if(maze[sy][sx] == 1){
			maze[sy][sx] = 0;
			search(sx, sy);
		}
		printf("Data %d:\n", i + 1);
		for(int j = 0; j < 8; ++j){
			for(int k = 0; k < 8; ++k){
				cout << maze[j][k];
			}
			cout << endl;
			maze[j].clear();
		}
		
	}
	return 0;
}