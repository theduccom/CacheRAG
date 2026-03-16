#include <cstdio>
#include <cstring>
#include <algorithm>
#define INF (1145141919)
using namespace std;

int n;

int from[6000];
int to[6000];
int cost[6000][2];

int d[100];
int r;
void Search(int s)
{
	for (int i = 0; i < 100; i++){
		d[i] = INF;
	}
	d[s] = 0;
	
	while (true){
		bool update = false;
		
		for (int i = 0; i < n * 2; i++){
			if (d[from[i]] != INF && d[to[i]] > d[from[i]] + cost[i][r]){
				d[to[i]] = d[from[i]] + cost[i][r];
				update = true;
			}
		}
		
		if (!update){
			break;
		}
	}
}
	

int main()
{	
	int m;
	while (scanf("%d %d", &n, &m), n + m){
		for (int i = 0; i < n; i++){
			int a, b, c, t;
			scanf("%d %d %d %d", &a, &b, &c, &t);
			a--;
			b--;
			
			
			from[i * 2] = a;
			to[i * 2] = b;
			cost[i * 2][0] = c;
			cost[i * 2][1] = t;
			
			from[i * 2 + 1] = b;
			to[i * 2 + 1] = a;
			cost[i * 2 + 1][0] = c;
			cost[i * 2 + 1][1] = t;
		}
		
		int k;
		scanf("%d", &k);
		
		for (int i = 0; i < k; i++){
			int p, q;
			scanf("%d %d %d", &p, &q, &r);
			p--;
			q--;
			
			Search(p);
			printf("%d\n", d[q]);
		}
	}
	
	return 0;
}