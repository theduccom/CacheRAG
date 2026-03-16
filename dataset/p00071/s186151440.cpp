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
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

string s;
int n;
int y, x, M[9][9];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void solve(int y,int x){
	M[y][x] = 0;

	for (int i = 0; i < 4; i++){
		for (int j = 1; j <= 3; j++){
			int ny = y + dy[i] * j, nx = x + dx[i] * j;
			if (ny >= 1 && ny <= 8 && nx >= 1 && nx <= 8){
				if (M[ny][nx] == 1)solve(ny, nx);
			}
		}
	}
}

int main(){
	cin >> n;
	REP(i, n){
		FOR(j, 1, 9){
			cin >> s;
			FOR(k, 1, 9){
				M[j][k] = s[k - 1] - '0';
			}
		}
		cin >> x >> y;
		solve(y, x);
		cout << "Data " << i + 1 << ":" << endl;
		FOR(j, 1, 9){
			FOR(k, 1, 9){
				cout << M[j][k];
			}
			cout << endl;
		}
	}
}