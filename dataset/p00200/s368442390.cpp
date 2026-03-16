#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;
typedef pair<int,int> P;
typedef struct{
	int next;
	int cost[2];
}edge;

int n,m;
vector<edge> mapp[111];
int bfs(int now,int goal,int k);

int main(){
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		for(int i=0;i<m+1;i++){
			mapp[i].clear();
		}
		for(int i=0;i<n;i++){
			int a,b,cost,tim;
			cin >> a >> b >> cost >> tim;
			edge x;
			x.next = a; x.cost[0] = cost; x.cost[1] = tim;
			mapp[b].push_back(x);
			x.next = b; x.cost[0] = cost; x.cost[1] = tim;
			mapp[a].push_back(x);
		}
		int k;
		cin >> k;
		int ans;
		for(int i=0;i<k;i++){
			int p,q,r;
			cin >> p >> q >> r;
			if(r == 0) ans = bfs(p,q,r);
			else if(r == 1) ans = bfs(p,q,r);
			cout << ans << endl;
		}
	}
}

int bfs(int now,int goal,int k){
	vector<int> min_cost;
	min_cost.resize(m+1,-1);
	priority_queue<P, vector<P>,greater<P> > que;
	que.push(P(0,now));
	min_cost[now] = 0;
	while(!que.empty()){
		P p = que.top(); que.pop();
		int no = p.second;
		int co = p.first;
		if(no == goal) return co;
		if(co > min_cost[no]) continue;
		int len=mapp[no].size();
		for(int i=0;i<len;i++){
			edge x = mapp[no][i];
			if(min_cost[x.next] == -1 || co+x.cost[k]<min_cost[x.next]){
				min_cost[x.next] = co + x.cost[k];
				que.push(P(co+x.cost[k],x.next));
			}
		}
	}
	return min_cost[goal];
}