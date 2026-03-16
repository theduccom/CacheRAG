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
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll; 
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;

int H, W;
char c[110][110];	
bool f[110][110];

void solve(int y, int x){
	if (f[y][x]){
		cout << "LOOP\n";
		return;
	}
	if (c[y][x] == '.'){
		cout << x << " " << y << endl;
		return;
	}	
	f[y][x] = 1;
	if (c[y][x] == '>'){
		solve(y, x + 1);
	}
	else if (c[y][x] == 'v'){
		solve(y + 1, x);
	}
	else if (c[y][x] == '<'){
		solve(y, x - 1);
	}
	else{
		solve(y - 1, x);
	}
}

int main(){
	while (cin >> H >> W){
		if (H + W == 0)break;
		REP(i, H){
			REP(j, W){
				cin >> c[i][j];
			}
		}
		solve(0, 0);
		REP(i, H){
			REP(j, W){
				f[i][j] = 0;
			}
		}
	}
}