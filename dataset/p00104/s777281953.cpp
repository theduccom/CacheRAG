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
#include <iterator>

using namespace std;

typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
 
char s[101][102];

int n,m;
void solve()
{
	for(int i= 0 ; i < n; i++) cin>>s[i];
	int x = 0,y = 0;
	while(s[y][x] != '.'){
		char c = s[y][x];
		s[y][x] = '#';
		switch(c){
		case '#':
			puts("LOOP");
			return;
		case '>':
			x++;
			break;
		case '<':
			x--;
			break;
		case 'v':
			y++;
			break;
		case '^':
			y--;
			break;
		}
	}
	printf("%d %d\n",x,y);
}

int main(){
	while(cin>>n>>m,(n||m)){
		solve();
	}
    return 0;
}