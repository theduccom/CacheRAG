#include<bits/stdc++.h>
using namespace std;


//テ」ツδ?」ツつ、テ」ツつッテ」ツつケテ」ツδ暗」ツδゥテ」ツ?軍untime Errorティツオツキテ」ツ?禿」ツ?療」ツ?ヲテ」ツ?療」ツ?セテ」ツ?」テ」ツ??テつエテ」ツδサテ渉嘉」ツδサ`)テッツセツ?ッツスツセテッツセツ?
/*
class Node{
public:
	int num;
	int cost;

	Node(){ num = 0; cost = 0; }
	Node(int num, int cost) : num(num), cost(cost){}

};

bool operator< (const Node &n1, const Node &n2){
	return n1.cost < n2.cost;
}

bool operator>(const Node &n1, const Node &n2){
	return n1.cost > n2.cost;
}


bool checked[21];

int main(void){

	int n, m;
	cin >> n >> m;

	vector<vector<pair<int, int> > > path(n + 1);
	for (int i = 0; i < m; i++){
		int	a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		path[a].push_back(make_pair(b, c));
		path[b].push_back(make_pair(a, d));
	}

	int s, g, V, P;
	scanf("%d,%d,%d,%d", &s, &g, &V, &P);
	int result = V - P;

	for (int i = 0; i <= 20; i++){
		checked[i] = false;
	}

	priority_queue<Node, vector<Node>, greater<vector<Node>::value_type> > que1;//cost, point
	que1.push(Node(s, 0));

	while (!que1.empty()){
		Node cp = que1.top();
		que1.pop();

		int cost = cp.cost;
		int point = cp.num;

		if (checked[point]) continue;
		checked[point] = true;

		if (point == g){
			result -= cost;
			break;
		}

		for (int i = 0; i < path[point].size(); i++){
			que1.push(Node(path[point][i].second, cost + path[point][i].first));
		}

	}

	for (int i = 0; i <= 20; i++){
		checked[i] = false;
	}
	priority_queue<Node, vector<Node>, greater<vector<Node>::value_type> > que2;//cost, point
	que1.push(Node(g, 0));

	while (!que2.empty()){
		Node cp = que2.top();
		que2.pop();

		int cost = cp.cost;
		int point = cp.num;

		if (checked[point]) continue;
		checked[point] = true;

		if (point == s){
			result -= cost;
			break;
		}

		for (int i = 0; i < path[point].size(); i++){
			que2.push(Node(path[point][i].second, cost + path[point][i].first));
		}

	}

	cout << result << endl;

	return 0;
}
*/

#define INF 1000000

int main(void){

	int n, m;
	cin >> n >> m;

	int dist[21][21];

	for (int i = 1; i < 21; i++){
		for (int j = 1; j < 21; j++){
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}

	for (int i = 0; i < m; i++){
		int	a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		dist[a][b] = c;
		dist[b][a] = d;
	}

	int s, g, V, P;
	scanf("%d,%d,%d,%d", &s, &g, &V, &P);

	for (int k = 1; k <= n; k++){
		for (int j = 1; j <= n; j++){
			for (int i = 1; i <= n; i++){
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	
	cout << V - P - dist[s][g] - dist[g][s] << endl;

}