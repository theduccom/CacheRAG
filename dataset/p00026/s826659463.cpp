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
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};

int sizeDx[3][4] = {{1, 1, -1, -1},{0, 0, 0, 0},{0, 0, 2, -2}};
int sizeDy[4][4] = {{1, -1, -1, 1},{0, 0, 0, 0},{2, -2, 0, 0}};
int main(void){
	int stat[10][10] = {0};
	int x, y, size;
	char c;
	while(cin >> x >> c >> y >> c >> size){
		stat[y][x] += 1;
		rep(i,8){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || ny < 0 || nx >= 10 || ny >= 10)continue;
			stat[ny][nx]++;
		}
		rep(i,4){
			int nx = x+sizeDx[size-1][i];
			int ny = y+sizeDy[size-1][i];
			if(nx < 0 || ny < 0 || nx >= 10 || ny >= 10)continue;
			if(size == 1){
				stat[ny][nx]--;
			}else if(size == 2){

			}else if(size == 3){
				stat[ny][nx]++;
			}
		}
	}
	int mx = 0;
	int zero = 0;
	rep(i,10)rep(j,10){
		mx = max(mx, stat[i][j]);
		if(stat[i][j] == 0)zero++;
	}
	FIN(zero);FIN(mx);

	return 0;
}