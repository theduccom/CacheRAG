#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define rep(I,N) for(int I = 0; I < (int)(N); I++)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
string maze[13];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y){
	maze[y][x] = '0';
	rep(i, 4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx >= 0 && nx <= 12 && ny >= 0 && ny <= 12 && maze[ny][nx] == '1'){
			maze[ny][nx] = '0';
			bfs(nx, ny);
		}
	}
}

int main(void){
	int w, h;
	while(cin >> maze[0]){
		rep(i, 11){
			cin >> maze[i+1];
		}
		int cnt = 0;
		rep(i, 12){
			rep(j, 12){
				if(maze[i][j] == '1'){
					bfs(j, i);
					cnt++;
				}
			}
		}
		FIN(cnt);
	}
	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}