//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>

using namespace std;

//repetition
//------------------------------------------
#define FOR(i, a, b) for (int i = (a);i < (b); ++i)
#define RFOR(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)

//clear memory
//--------------------------------------------
#define CLR(a) memset((a), 0 , sizeof(a))


#define INF 1<<21
int n, m, x[2], y[2];
int amat[20][20];
int res = 0;
char cht;

int main()
{
	cin >> n >> m;
	
	FOR(i, 0, n)
		FOR(j, 0, n)
			amat[i][j] = INF;

	FOR(i,0,m)
	{
		int a, b, c, d;
		
		cin >> a >>cht>> b >>cht>> c >>cht>> d;
		
		a--; b--;
		amat[a][b] = c;
		amat[b][a] = d;
	}
	
	cin >> x[0] >>cht>> x[1] >>cht>> y[0] >>cht>> y[1];
	x[0]--; x[1]--;
	
	FOR(k,0,n)
	FOR(i,0,n)
	FOR(j,0,n)
	{
		amat[i][j] = min( amat[i][j], amat[i][k] + amat[k][j]);
	}
	
	res = y[0] -y[1] -amat[x[0]][x[1]] -amat[x[1]][x[0]];
	
	cout << res << endl;
	
	return 0;
}