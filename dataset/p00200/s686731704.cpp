#include<bits/stdc++.h>
using namespace std;
#define M 100000007
typedef pair<int,int> P;
int main(void){
	int n,m,k;
	while(1){
		cin>>n>>m;
		if(n==0)break;
		vector<P> cost[m+1],time[m+1];
		for(int i=0;i<n;i++){
			int a,b,c,t;
			cin>>a>>b>>c>>t;
			cost[a].push_back(P(b,c)); cost[b].push_back(P(a,c));
			time[a].push_back(P(b,t)); time[b].push_back(P(a,t));
		}
		cin>>k;
		for(int i=0;i<k;i++){
			int s,g,f;
			int leng[m+1];
			priority_queue<P,vector<P>,greater<P> > que;
			fill(leng,leng+m+1,M);
			cin>>s>>g>>f;
			leng[s]=0;
			que.push(P(0,s));
			if(f==0){
				while(!que.empty()){
					P p=que.top(); que.pop();
					int v=p.second;
					if(leng[v]<p.first) continue;
					for(int j=0;j<cost[v].size();j++){
						P x=cost[v][j];
						if(leng[x.first]>leng[v]+x.second){
							leng[x.first]=leng[v]+x.second;
							que.push(P(leng[x.first],x.first));
						}
					}
				}
				cout<<leng[g]<<endl;
			}else{
				while(!que.empty()){
					P p=que.top(); que.pop();
					int v=p.second;
					if(leng[v]<p.first) continue;
					for(int j=0;j<time[v].size();j++){
						P x=time[v][j];
						if(leng[x.first]>leng[v]+x.second){
							leng[x.first]=leng[v]+x.second;
							que.push(P(leng[x.first],x.first));
						}
					}
				}
				cout<<leng[g]<<endl;
			}
		}
	}
	return 0;
}
