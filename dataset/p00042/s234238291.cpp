#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f
#include <cstdio>
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>

using namespace std;

typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P > PP;

int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};

static const double EPS = 1e-8;

int v[1000];
int w[1000];
int dp[1001][1001];

int main(){
	int W,N;
	int idx = 1;
	while(~scanf("%d",&W)){
		if(W==0) break;
		memset(dp,0,sizeof(dp));

		scanf("%d",&N);
		
		for(int i=0;i<N;i++){			
			scanf("%d,%d",&v[i],&w[i]);
		}

		for(int i=0;i<N;i++){
			for(int j=0;j<=W;j++){
				
				if(j-w[i] >= 0){
					dp[i+1][j] = max(dp[i][j-w[i]] + v[i],dp[i][j]);
				}
				else{
					dp[i+1][j] = dp[i][j];
				}
			}
		}

		int resv = 0;
		int resw = 0;
		for(int j=0;j<=W;j++){
			if(dp[N][j] > resv){
				resv = dp[N][j];
				resw = j;
			}
		}

		printf("Case %d:\n%d\n%d\n",idx++,resv,resw);
	}
}