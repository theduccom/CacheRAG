#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#define INF (2000000000)
using namespace std;

typedef vector<int> VI;
typedef vector<int>::iterator VII;
typedef vector<double> VD;
typedef vector<double>::iterator VDI;


int head[20];
int to[400];
int next[400];
int cost[400];

int d[20];

int n, m;

void Search(int now)
{
	fill(d, d + 20, INF);
	d[now] = 0;
	
	while (true){
		bool update = false;
		
		for (int i = 0; i < n; i++){
			for (int e = head[i]; e != -1; e = next[e]){
				if (d[i] != INF && d[to[e]] > d[i] + cost[e]){
					d[to[e]] = d[i] + cost[e];
					update = true;
				}
			}
		}
		
		if (!update){
			break;
		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	
	memset(head, -1, sizeof(head));
	for (int i = 0; i < m; i++){
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		a--; b--;
		
		next[i * 2] = head[a];
		head[a] = i * 2;
		to[i * 2] = b;
		cost[i * 2] = c;
		
		next[i * 2 + 1] = head[b];
		head[b] = i * 2 + 1;
		to[i * 2 + 1] = a;
		cost[i * 2 + 1] = d;
	}
	
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	x1--; x2--;
	
	
	int go, back;
	Search(x1);
	go = d[x2];
	Search(x2);
	back = d[x1];
	
	printf("%d\n", y1 - y2 - go - back);
	
	return 0;
}