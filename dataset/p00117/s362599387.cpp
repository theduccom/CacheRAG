#include <iostream>
#include <cstdio>

using namespace std;

#define INF (1 << 30)
#define MAX_E 1000
#define MAX_V 100

struct edge{
	int from;
	int to;
	int cost;
};

edge es[MAX_E];
int d[MAX_V];
int V, E;// V???????????°???E????????°

// O(VE)??§????????????????????????????????§??????

void shortest_path(int s){
	for(int i = 1; i <= V; i++){
		d[i] = INF;
	}
	d[s] = 0;
	while(true){
		bool update = false;
		for(int i = 0; i < E; i++){
			edge e = es[i];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if(!update){
			break;
		}
	}
}

int main(){
	
	int a1, b1, c1, d1, p, q, r, s;
	
	int ans1, ans2;
	
	cin >> V >> E;
	
	for(int i = 0; i < E; i++){
		scanf("%d,%d,%d,%d", &a1, &b1, &c1, &d1);
		es[2 * i].from = a1;
		es[2 * i].to = b1;
		es[2 * i].cost = c1;
		es[2 * i + 1].from = b1;
		es[2 * i + 1].to = a1;
		es[2 * i + 1].cost = d1;
	}
	
	E *= 2;
	
	scanf("%d,%d,%d,%d", &p, &q, &r, &s);
	
	shortest_path(p);
	ans1 = d[q];
	shortest_path(q);
	ans2 = d[p];
	printf("%d\n", r - s - ans1 - ans2);
	
	return 0;
}