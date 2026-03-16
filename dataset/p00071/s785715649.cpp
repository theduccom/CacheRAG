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

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef pair<int, int> pii;

int main()
{
	int n;
	scanf("%d", &n);
	rep(i, n){
		char field[16][16];
		rep(j, 8) scanf(" %s", field[j]);
		pii fst;
		scanf("%d%d", &fst.second, &fst.first);
		fst.second--;
		fst.first--;

		queue<pii> Q;
		Q.push(fst);
		do{
			pii p = Q.front();
			Q.pop();
			if(field[p.first][p.second] == '0')
				continue;
			field[p.first][p.second] = '0';
			reep(j, -3, 4){
				int py = p.first + j, px = p.second + j;

				if(0<=px && px<8 && field[p.first][px] == '1')
					Q.push(pii(p.first, px));
				if(0<=py && py<8 && field[py][p.second] == '1')
					Q.push(pii(py, p.second));
			};

		}while(!Q.empty());

		printf("Data %d:\n", i+1);
		rep(j, 8)
			puts(field[j]);
	}

	return 0;
}