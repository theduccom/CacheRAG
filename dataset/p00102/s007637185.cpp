// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <locale>
#include <cctype>
#include <sstream>
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef map<int, int> MAPII;
typedef vector<pair<int, int> > VPII;

#define MP make_pair
#define fastIO	cin.tie(0); ios::sync_with_stdio(false);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
//for gcc (未test)
// #define FOREACH_IT(it,c)	for(typeof(c)::iterator it=(c).begin(); it!=(c).end(); ++it)
//for Visual Studio
#define foreach_it(type,it,c) for(type::iterator it=c.begin(), c_end=c.end(); it!=c_end; ++it)

// ------------------- include, typedef, define END. -------------------

void solve(VVI &in, int n){
	int rowSum = 0, columnSum = 0;
	int allSum=0;
	FOR(i, 0, in.size()-1){
		rowSum = 0;
		columnSum = 0;
		FOR(j, 0, in[i].size()-1){
			rowSum += in[i][j];
			columnSum += in[j][i];
		}
		allSum += rowSum;
		in[i][n] = rowSum;
		in[n][i] = columnSum;
	}
	in[n][n] = allSum;
	FOR(i, 0, in.size()){
		FOR(j, 0, in[i].size()){
			printf("%5d", in[i][j]);
		}
		puts("");
	}
}

int main(){
	fastIO;
	int n, in = 0;
	while (cin >> n, n){
		VVI inNum(n + 1, VI(n + 1));
		FOR(i, 0, n){
			FOR(j, 0, n){
				cin >> in;
				inNum[i][j] = in;
			}
		}
		solve(inNum,n);
	}
	return 0;
}