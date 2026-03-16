# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <bitset>
# include <complex>
#include<limits.h>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include<cstdio>
typedef long long int ll;
#define FOR(i,a,n) for(int i=(ll)a;i<(ll)n;++i)
#define TFOR(i,n)FOR(i,0,n)
#define ALL(x) x.begin(),x.end();
const int INF = 1LL << 30;
const ll LLINF = 1LL << 60;
int V; /*?????§????????°*/
struct edge { int to, cost; };
typedef std::pair<int, int> PP;
// ???cost??¨????????????????????¢
std::vector<edge> list[20];
int d[20];
void DIJX(int st) {
	for (int i = 0; i<V; i++)d[i] = INF; // std::fill??§????????????
	d[st] = 0; // ?§????
	std::priority_queue<PP, std::vector<PP>, std::greater<PP>> pq;
	pq.push(std::make_pair(d[st], st)); // (cost,????????????)
	while (!pq.empty()) {
		PP p = pq.top();
		pq.pop();
		int i = p.second; // cost???first??????????????????second
		if (d[i]<p.first)continue;
		for (int k = 0; k<list[i].size(); k++) {
			edge e = list[i][k];
			if (d[e.to] <= d[i] + e.cost)continue;
			d[e.to] = d[i] + e.cost;
			pq.push(std::make_pair(d[e.to], e.to));
		}
	}
}
int main() {
		int m, a, b, c,dd;
		std::cin >> V;
		std::cin >> m;
		char c1, c2, c3;
		for (int i = 0; i<m; i++) {
			std::cin >> a >>c1>> b >>c2>> c>>c3>>dd;	
			list[a-1].push_back(edge { b-1, c });
			list[b-1].push_back(edge{ a-1, dd });
		}
		int s, g, get, lost,ans=0;
		std::cin >> s >>c1>> g >>c2>> get >>c3>> lost;
		ans += get - lost;
		DIJX(s-1);
		ans -= d[g-1];
		DIJX(g-1);
		ans -= d[s - 1];
		std::cout << ans << std::endl;
	return 0;
}