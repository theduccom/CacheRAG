#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <functional>


#ifdef _DEBUG
#define typeof(X) std::identity<decltype(X)>::type //C++0x (for vs2010)
#else
#define typeof(X) __typeof__(X) // for gcc
#endif

using namespace std;
static const double EPS = 1e-6;
typedef long long ll;
const int MODULO = 1000000007;
const int INF = 100000000; //1e8

typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
typedef complex<double> Cd;

char s[12][14];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void dfs(int y,int x){
	s[y][x] = '0';
	for (int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx >= 0 && nx < 12 && ny >= 0 && ny < 12 && s[ny][nx] == '1'){
			dfs(ny,nx);
		}
	}
}

int main(){
	while(true){
		if(!(cin>>s[0]))break;
		for(int i=1;i<12;i++){
			cin>>s[i];
		}
		int ans = 0;
		for (int i = 0; i < 12; i++){
			for (int j = 0; j < 12; j++){
				if(s[i][j] == '1'){
					ans++;
					dfs(i,j);
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}