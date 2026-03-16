#include <cstdio>

#include <cstdlib>

#include <cmath>

#include <climits>

#include <cfloat>

#include <map>

#include <utility>

#include <set>

#include <iostream>

#include <memory>

#include <string>

#include <vector>

#include <algorithm>

#include <functional>

#include <sstream>

#include <complex>

#include <stack>

#include <queue>

#include <numeric>

#include <cstring>



#define rep(i, n) for(int i = 0; i < (n); i++)

#define pb push_back



using namespace std;



typedef long long ll;

typedef pair<int, int> P;

typedef vector<int> vi;

typedef vector<vi> vvi;



const int INF = 1 << 29;

const double EPS = 1e-9;

const int MAX_N = 1000;

const int MAX_W = 1000;



int dp[MAX_N + 1][MAX_W + 1];

int dpw[MAX_N + 1][MAX_W + 1];



int main(){

	int n, cap, ans_c = 0;

	int v[MAX_N], w[MAX_N];

	

	while(1){

		memset(dp, 0 , sizeof(dp));

		memset(dpw, 0, sizeof(dpw));

		scanf("%d", &cap);

		if(cap == 0) break;

		scanf("%d", &n);



		rep(i, n){

			scanf("%d,%d\n",&v[i],&w[i]);

		}



		for(int i = 0; i < n; i++){

			for(int j = 0; j <= cap; j++){

				if(j < w[i]){

					dp[i+1][j] = dp[i][j];

					dpw[i+1][j] = dpw[i][j];

				}else{

					dp[i+1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);

					if(dp[i+1][j] == dp[i][j - w[i]] +v[i]){

						dpw[i+1][j] = dpw[i][j-w[i]] + w[i];

					}else{

						dpw[i+1][j] = dpw[i][j];

					}

				}

			}

		}

		ans_c++;

		printf("Case %d:\n%d\n%d\n", ans_c , dp[n][cap], dpw[n][cap]);

	}

}