#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> mypair;
#define inf 1000000
void daikustora(int s,vector<vector<mypair> > &g,vector<int> &cost){
	priority_queue<mypair,vector<mypair> ,greater<mypair> > q;
	cost[s] = 0;
	q.push(mypair(0,s));
	while(!q.empty()){
		mypair now =q.top();
		q.pop();	
		if(now.first>cost[now.second])continue;
		for(int i=0;i<g[now.second].size();i++){
			int next = g[now.second][i].second;
			int ncost = g[now.second][i].first;
			if(cost[next]>cost[now.second]+ncost){
				cost[next] = cost[now.second]+ncost;
				q.push(mypair(cost[next],next));
			}

		}
	}

	return ;
}
int main(){
int n,m;
cin>>n>>m;
int s,f,v,p;
vector<vector<mypair> > g(n+1);
for(int i=0;i<m;i++){
int a,b,c,d;
scanf("%d,%d,%d,%d",&a,&b,&c,&d);
g[a].push_back(mypair(c,b));
g[b].push_back(mypair(d,a));

}
scanf("%d,%d,%d,%d",&s,&f,&v,&p);

vector<int> cost_go(n+1,inf),cost_re(n+1,inf);
daikustora(s,g,cost_go);
daikustora(f,g,cost_re);
p+=cost_go[f]+cost_re[s];
cout<<v-p<<endl;

	return 0;
}

