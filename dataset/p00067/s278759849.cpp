#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef pair<int, int> pii;

int island;
char field[16][16];

void search(int y, int x)
{
	field[y][x] = '2';
	int dy[] = {0, 1, 0, -1};
	int dx[] = {-1, 0, 1, 0};

	rep(i, 4) rep(j, 4){
		int py = dy[i] + y;
		int px = dx[i] + x;
		if(py<0 || px<0 || 12<=py || 12<=px)
			continue;
		if(field[py][px] != '1')
			continue;
		search(py, px);
	}
}

int main()
{
	while(1){
		island = 0;
		rep(i, 12){
			if(scanf("%s", field[i]) == EOF)
				return 0;
		}
		rep(i, 12){
			rep(j, 12){
				if(field[i][j] == '1'){
					search(i, j);
					++island;
				}
			}
		}
		printf("%d\n", island);
	}
}