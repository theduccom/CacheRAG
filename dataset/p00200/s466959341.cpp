#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

typedef pair<int, int> P;
 
struct station
{
    station(int to, int cost, int time)
    {
        this->to = to;
        this->cost = cost;
        this->time = time;
    }

    int to;
    int cost;
    int time;
};

void dijkstra(int from, int mode);

vector<station> route[1000];
int mini[1000];
int n, m;

int main()
{
    while (scanf("%d %d", &n, &m) * n != 0){
        for (int i = 0; i < m; i++){
            route[i].clear();
        }
        for (int i = 0; i < n; i++){
            int a, b;
            int cost, time;
             
            scanf("%d %d %d %d", &a, &b, &cost, &time);
            a--, b--;
            route[a].push_back(station(b, cost, time));
            route[b].push_back(station(a, cost, time));
        }
        
        int k;
        scanf("%d", &k);
        while (k-- > 0){
            int p, q, r;
            scanf("%d %d %d", &p, &q, &r);
            p--, q--;
            mini[p] = 0;
            dijkstra(p, r);
            printf("%d\n", mini[q]);
        }
    }
    
    return 0;
}
 
void dijkstra(int from, int mode)
{
	priority_queue<P, vector<P>, greater<P> > que;
	
	fill(mini, mini + m, 1000000000);
	mini[from] = 0;
	que.push(P(0, from));
	
	while (!que.empty()){
		P p = que.top();
		que.pop();
		int v = p.second;
		
		if (mini[v] < p.first){
			continue;
		}
		for (int i = 0; i < route[v].size(); i++){
			station s = route[v][i];
			if (mode == 0 && mini[s.to] > mini[v] + s.cost){
				mini[s.to] = mini[v] + s.cost;
				que.push(P(mini[s.to], s.to));
			}
			else if (mode == 1 && mini[s.to] > mini[v] + s.time){
				mini[s.to] = mini[v] + s.time;
				que.push(P(mini[s.to], s.to));
			}
		}
	}
}