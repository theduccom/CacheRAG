#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };
const int dx2[] = { -1, -1, 1, 1 }; const int dy2[] = { -1, 1, 1, -1 };
int main() {
	char c;
	int cell[10][10]={0};
	int x, y, size;
	while (cin>>x>>c>>y>>c>>size){
		
		switch (size)
		{
		case 3:
			REP(i, 4){
				if (0 <= x + dx[i] * 2 && x + dx[i] * 2 <= 9 && 0 <= y + dy[i] * 2 && y + dy[i] * 2 <= 9)
					cell[x + dx[i] * 2][y + dy[i] * 2]++;
			}
		case 2:
			REP(i, 4){
				if (0 <= x + dx2[i]  && x + dx2[i]  <= 9 && 0 <= y + dy2[i]  && y + dy2[i]  <= 9)
					cell[x + dx2[i] ][y + dy2[i]]++;
			}
		case 1:
			REP(i, 4){
				if (0 <= x + dx[i] && x + dx[i] <= 9 && 0 <= y + dy[i] && y + dy[i] <= 9)
					cell[x + dx[i]][y + dy[i]]++;
			}
			cell[x][y]++;
			break;
		}
	}
	int maxb=0;
	int count=0;
	REP(i,10){
		REP(j,10){
			if(cell[i][j]==0)
			count++;
			maxb=max(maxb,cell[i][j]);
		}
	}
	cout<<count<<endl<<maxb<<endl;
}