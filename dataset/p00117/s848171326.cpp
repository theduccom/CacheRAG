#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
typedef pair<int,int> NODE;

int dijk(int a,int b,int n, vector<vector<pair<int,int> > >info){
	priority_queue<NODE,vector<NODE>,greater<NODE> > Q;

	vector<NODE> node(n);
	for(int i=0;i<node.size();i++){
		node[i].first  = INT_MAX;
		node[i].second = i;
	}
	
	node[a].first = 0;	
	Q.push(node[a]);

	while(!Q.empty()){
		NODE now = Q.top();
		Q.pop();
		
		for(int i=0;i<info[now.second].size();i++){
			int to   = info[now.second][i].first;
			int cost = now.first + info[now.second][i].second;
			
			if(cost < node[to].first){
				node[to].first = cost;
				Q.push(node[to]);
			}
		}
	}
	return node[b].first;
}

int main(){
	int n,m,a,b,c,d,ret;
	cin >> n >> m;
		
	vector< vector< pair<int,int> > > info(n);
	
	for(int i=0;i<m;i++){
		scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
		a--;b--;
		info[a].push_back( make_pair(b,c) );
		info[b].push_back( make_pair(a,d) );
	}

	scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
	a--;b--;
		
	ret = c-d;

	cout << ret - dijk(a,b,n,info) - dijk(b,a,n,info) << endl;
}