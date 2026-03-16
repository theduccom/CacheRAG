#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define mod 1000000007
#define lol(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> PP;
int main(){
	int n,m;
	while(cin>>m>>n&&n+m){
		priority_queue<P,vector<P>,greater<P> >Q;
		vector<PP> v[110];
		int dis[110];
		lol(i,m){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			v[a].push_back(make_pair(b,make_pair(c,d)));
			v[b].push_back(make_pair(a,make_pair(c,d)));
		}
		cin>>m;
		lol(u,m){
			lol(i,n)dis[i+1]=mod;
			int s,t,c;cin>>s>>t>>c;
			Q.push(make_pair(0,s));
			while(!Q.empty()){
				int b=Q.top().first,a=Q.top().second;
				Q.pop();
				if(dis[a]<mod)continue;
				dis[a]=b;
				lol(i,v[a].size()){
					int to=v[a][i].first,co=b+(c?v[a][i].second.second:v[a][i].second.first);
					if(dis[to]==mod)Q.push(make_pair(co,to));
				}
			}
			cout<<dis[t]<<endl;
		}
	}
	return 0;
}