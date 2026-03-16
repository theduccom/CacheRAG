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
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef complex<double> Point;

typedef map<int, pair<int, long long> > mipill;

int main()
{
	int w, h;
	while(scanf("%d%d", &h, &w), w){
		vector<vector<bool> > memo(h, vector<bool>(w, false));
		vector<string> field(h);
		rep(i, h){
			char str[128];
			scanf("%s", str);
			field[i] = string(str);
		}

		int y = 0, x = 0;
		while(field[y][x] != '.' && !memo[y][x]){
			memo[y][x] = true;
			if(field[y][x] == '>')
				++x;
			else if(field[y][x] == 'v')
				++y;
			else if(field[y][x] == '^')
				--y;
			else
				--x;
		}

		if(field[y][x] == '.')
			printf("%d %d\n", x, y);
		else
			puts("LOOP");
	}

	return 0;
}