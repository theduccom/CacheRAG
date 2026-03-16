#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int dataset;
vector<string> plane(8);

void dfs(int y,int x){
	rep(i,4){
		REP(j,1,4){
			int ny = y + DY[i] * j,nx = x + DX[i] * j;
			if(0 <= ny && ny < 8 && 0 <= nx && nx < 8 && plane[ny][nx] == '1'){
				plane[ny][nx] = '0';
				dfs(ny,nx);
			}
		}
	}
}
int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	int cnt = 1,sy,sx,ch;
	cin >> dataset;
	ch = getchar();

	while(cnt <= dataset){
		rep(i,8)
			cin >> plane[i];
		cin >> sx >> sy;
		ch = getchar();
		plane[sy - 1][sx - 1] = '0';
		dfs(sy - 1,sx - 1);
		cout << "Data " << cnt++ << ":" << endl;
		rep(i,8)
			cout << plane[i] << endl;
	}
	return 0;
}