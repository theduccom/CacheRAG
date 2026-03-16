#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
typedef pair<int,int> pr;
typedef priority_queue<pr,vector<pr >,greater<pr> > pq;
const int INF=1<<30;
int Dijkstra(int start,int goal,vector<pr> cost[101]){
	int ans[101];
	for(int i=0;i<101;i++)
		ans[i]=INF;	
	ans[start]=0;
	pq p;
	p.push(pr(0,start));
	while(!p.empty()){
		int f=p.top().first,s=p.top().second;
		p.pop();
		if(f!=ans[s]) continue;
		for(int i=0;i<cost[s].size();i++){
			int next=cost[s][i].second;
			if(ans[next]>ans[s]+cost[s][i].first){
				ans[next]=ans[s]+cost[s][i].first;
				p.push(pr(ans[next],next));
			}
		}
	}
	return ans[goal];
}
int main() {
	// your code goes here
	int m,n,a,b,c,d;
	while(cin >> n >> m && n){
	vector<pr> price[101],time[101];
	for(int i=0;i<n;i++){
		cin >> a>>b>>c>>d;
		price[a].push_back(pr(c,b));
		price[b].push_back(pr(c,a));
		time[a].push_back(pr(d,b));
		time[b].push_back(pr(d,a));
	}
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a>> b >>c;
		if(!c)
	cout << Dijkstra(a,b,price) << endl;
	else
	cout <<	Dijkstra(a,b,time) << endl;
	}
	}
	return 0;
}