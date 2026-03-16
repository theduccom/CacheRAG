#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstdio>
using namespace std;

class Node{
public:
	vector< int > e_to;
	vector< int > e_cost;
	
	bool def;
	int min_cost;
	
	Node(){
		def = false;
		min_cost = -1;
	}
};
bool operator==(const Node& ot1, const Node& ot2){
	return ot1.min_cost == ot2.min_cost;
}
bool operator!=(const Node& ot1, const Node& ot2){
	return !(ot1 == ot2);
}
bool operator<(const Node& ot1, const Node& ot2){
	return ot1.min_cost < ot2.min_cost;
}
bool operator>(const Node& ot1, const Node& ot2){
	return ot1.min_cost > ot2.min_cost;
}
bool operator<=(const Node& ot1, const Node& ot2){
	return !(ot1 > ot2);
}
bool operator>=(const Node& ot1, const Node& ot2){
	return !(ot1 < ot2);
}
vector< Node > nodes;
priority_queue< Node, vector< Node >, greater< Node > > que;

int dijkstra(int s, int t){
	for(vector< Node >::iterator it = nodes.begin(); it != nodes.end(); ++it){
		it->def = false;
		it->min_cost = -1;
	}
	nodes[s].min_cost = 0;
	que.push(nodes[s]);
	while(!que.empty()){
		Node def_node = que.top();
		que.pop();
		if(def_node.def)continue;
		def_node.def = true;
		for(int i = 0; i < def_node.e_to.size(); ++i){
			int to = def_node.e_to[i];
			int cost = def_node.min_cost + def_node.e_cost[i];
			if(nodes[to].min_cost == -1 || cost < nodes[to].min_cost){
				nodes[to].min_cost = cost;
				que.push(nodes[to]);
			}
		}
	}
	
	return nodes[t].min_cost;
}

int main(){
	int n, m, a, b, c, d, x1, x2, y1, y2;
	
	
	cin >> n >> m;
	nodes.resize(n);
	
	for(int i = 0; i < n; ++i){
		nodes[i] = Node();
	}
	
	for(int i = 0; i < m; ++i){
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		nodes[a - 1].e_to.push_back(b - 1);
		nodes[a - 1].e_cost.push_back(c);
		
		nodes[b - 1].e_to.push_back(a - 1);
		nodes[b - 1].e_cost.push_back(d);
	}
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	
	cout << y1 - y2 - (dijkstra(x1-1, x2-1) + dijkstra(x2-1, x1-1)) << endl;
	return 0;
}