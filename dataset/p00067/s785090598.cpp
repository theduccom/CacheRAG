#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int maze[12][12];
static const int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };

void printTable(int a[12][12]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
}

void dfs(int y, int x) {
	maze[y][x] = 0;
	for (int i = 0; i < 4; i++) {
		if (0 <= dx[i] + x && dx[i] + x < 12 && 0 <= dy[i] + y && dy[i] + y < 12 && maze[y + dy[i]][x + dx[i]] == 1) {
			dfs(y + dy[i], x + dx[i]);
		}
	}
}


int main()
{
	string s;
	while (cin>>s) {
		//memset(maze, 0, sizeof(maze));
		if (s.size() == 0)break;//if(cin.eof())break;
		//1 line 
		for (int i = 0; i < 12; i++) {
			maze[0][i] = s[i] - '0';
		}
		//2-12 line
		for (int i = 1; i < 12; i++) {
			cin >> s;
			for (int j = 0; j < 12; j++) {
				maze[i][j] = s[j] - '0';
			}
		}
		int ans = 0;
		//cout << "=======dfs???=======" << endl;
		//printTable(maze);
		//cout << "===================" << endl;
		//dfs
		for (int y = 0; y < 12; y++) {
			for (int x = 0; x < 12; x++) {
				if (maze[y][x] == 1) {
					dfs(y, x);
					ans++;
				}
			}
		}
		cout << ans << endl;
		//cout << "=======dfs???=======" << endl;
		//printTable(maze);
		//cout << "===================" << endl;
	}



	return 0;
}