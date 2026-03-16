#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll;

string s;
//char a[100][100];
int c = 0;
int dx[] = { 1, 0, -1, 0 }, dy[] = { 0, 1, 0, -1 };
vector<string> vs;

void dfs(int x, int y){
	vs[x][y] = '0';

	for (int i = 0; i < 4; i++){
		if (x + dx[i] >= 0 && x + dx[i] <= 11 &&
			y + dy[i] >= 0 && y + dy[i] <= 11){
			if (vs[x + dx[i]][y + dy[i]] == '1'){
				dfs(x + dx[i], y + dy[i]);
			}
		}
	}
	return;
}

int main(){
	while (cin >> s){
		vs.push_back(s);
		FOR(i, 1, 12){
			cin >> s;
			vs.push_back(s);
		}
		REP(i, 12){
			REP(j, 12){
				if (vs[i][j] == '1'){
					dfs(i, j);
					c++;
				}
			}
		}
		cout << c << endl;
		c = 0;
		vs.clear();
	}
}