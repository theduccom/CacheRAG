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
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <iomanip>

using namespace std;

char c[8][9];

void dfs(int x,int y){
	c[y][x] = '0';
	for (int i = -3; i <= 3; i++){
		int nx = x + i;
		if(nx >= 0 && nx < 8 && c[y][nx] == '1')
			dfs(nx,y);
	}
		for (int i = -3; i <= 3; i++){
		int ny = y + i;
		if(ny >= 0 && ny < 8 && c[ny][x] == '1')
			dfs(x,ny);
	}
}

void solve() {
	for(int i= 0; i < 8; i++) cin>>c[i];
	int x,y;
	cin>>x>>y;
	dfs(x-1,y-1);
	for(int i= 0; i < 8; i++) cout<<c[i]<<endl;
}

int main(){
	int t; cin>>t;
	for(int i = 1; i <= t; i++){
		printf("Data %d:\n",i);
		solve();
	}
    return 0;
}