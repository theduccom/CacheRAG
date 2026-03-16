#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;

typedef int Weight;
struct Edge {
	int src, dst;
	Weight weight;
	Edge(int src_, int dst_, Weight weight_) :
		src(src_), dst(dst_), weight(weight_) { }
	Edge(int src_, int dst_) :
		src(src_), dst(dst_) {

	}
};
pair<bool, vector<Weight>> spfa(const int v_num, const vector<vector<Edge>>&es, const int start) {
	vector<Weight>diss(v_num, INT_MAX);
	queue<int>que;
	vector<bool>use(v_num);
	vector<int>count(v_num);
	que.emplace(start);
	diss[start] = 0;
	while (!que.empty()) {
		int src(que.front());
		que.pop();
		use[src] = false;
		for (auto e : es[src]) {
			const int d = e.dst;
			if (diss[src] + e.weight < diss[d]) {
				diss[d] = diss[src] + e.weight;
				if (!use[d]) {
					use[d] = true;
					count[d]++;
					if (count[d] >= v_num)return make_pair(false, vector<Weight>());
					que.emplace(d);
				}
			}
		}
	}
	return make_pair(true, diss);
}

int main() {
	int N, M; cin >> N >> M;
	vector<vector<Edge>>es(N);
	for (int i = 0; i < M; ++i) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		a--; b--;
		es[a].push_back(Edge(a, b, c));
		es[b].push_back(Edge(b, a, d));
	}
	int s, g, V, P;
	scanf("%d,%d,%d,%d", &s, &g, &V, &P);
	s--; g--;
	auto p1 = spfa(N, es, s);
	auto p2 = spfa(N, es, g);
	cout << V - P - p1.second[g] - p2.second[s] << endl;
	return 0;
}