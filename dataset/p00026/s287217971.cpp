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

int d[100][100];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };
int x, y, size;

int main(){
	while (scanf("%d,%d,%d", &x, &y, &size)!=EOF){
		if (size == 1){
			d[x][y]++;
			for (int i = 0; i < 4; i++){
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx >= 0 && ny >= 0 && nx < 10 && ny < 10){
					d[x + dx[i]][y + dy[i]]++;
				}
			}
		}
		if (size == 2){
			for (int i = -1; i <= 1; i++){
				for (int j = -1; j <= 1; j++){
					if (x + i >= 0 && x + i < 10 && y + j >= 0 && y + j < 10){
						d[x + i][y + j]++;
					}
				}
			}
		}
		if (size == 3){
			for (int i = -2; i <= 2; i++){
				for (int j = -2; j <= 2; j++){
					if (abs(i) + abs(j) <= 2){
						if (x + i >= 0 && x + i < 10 && y + j>=0 && y + j < 10){
							d[x + i][y + j]++;
						}
					}
				}
			}
		}
	}
	int ans = 0 , MAX = 0;
	REP(i, 10){
		REP(j, 10){
			if (d[i][j] == 0)ans++;
			MAX = max(MAX, d[i][j]);
		}
	}
	cout << ans << endl;
	cout << MAX << endl;
}