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
struct road{
	int to;
	int cost;
};

int main() {
	int n, m;
	char gomi;
	cin >> n >> m;
	vector < vector<road>> vvr(n+1);
	REP(i,m){
		int a, b, c, d;
		cin >> a >> gomi >> b >> gomi >> c >> gomi >> d;
		vvr[a].push_back({ b, c });
		vvr[b].push_back({ a, d });
	}
	int start, goal, money,hashira;
	cin >> start >> gomi >> goal >> gomi >> money >> gomi >> hashira;
	vector<int> cost1(n + 1);
	vector<int> cost2(n + 1);
	vector<bool> cb1(n + 1);
	vector<bool> cb2(n+1);
	REP(i, n + 1){
		cost1[i] = 1 << 30;
		cost2[i] = 1 << 30;
		if (i){
			cb1[i]=false;
			cb2[i] = false;
		}
		else{
			cb1[i] = true;
			cb2[i] = true;
		}
	}
	cost1[start] = 0;
	cost2[goal] = 0;
	while (1){
		int min = 1 << 30;
		int town;
		REP(i,cost1.size()){
			if (!cb1[i])
				if (min > cost1[i]){
					min = cost1[i];
					town = i;
				}
		}

		cb1[town] = true;
		if (town == goal)break;
		REP(i,vvr[town].size()){
			cost1[vvr[town][i].to] = cost1[town] + vvr[town][i].cost;
		}
	}
	while (1){
		int min = 1 << 30;
		int town;
		REP(i, cost2.size()){
			if (!cb2[i])
				if (min > cost2[i]){
					min = cost2[i];
					town = i;
				}
		}
		cb2[town] = true;
		if (town == start)break;
		REP(i, vvr[town].size()){
			if (cost2[vvr[town][i].to] > cost2[town] + vvr[town][i].cost)
			cost2[vvr[town][i].to] = cost2[town] + vvr[town][i].cost;
		}
	}
	cout <<money-hashira-cost1[goal]-cost2[start] << endl;
}