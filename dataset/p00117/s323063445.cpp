#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int,int>P;

vector<P>E[30];
int d[30];
int e[30];

int main(){
	memset(d,0x3f,sizeof(d));
	memset(e,0x3f,sizeof(e));
	int n,m;cin>>n>>m;
	rep(i,m){
		int a,b,c,d;scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		a--;b--;
		E[a].push_back(P(b,c));E[b].push_back(P(a,d));
	}
	int s,g,a,b;scanf("%d,%d,%d,%d",&s,&g,&a,&b);
	s--;g--;
	priority_queue<P,vector<P>,greater<P>>pque;
	pque.push(P(s,0));
	d[s]=0;
	while(!pque.empty()){
		P p=pque.top();pque.pop();
		if(p.second>d[p.first])continue;
		for(P i:E[p.first]){
			if(d[i.first]>d[p.first]+i.second){
				d[i.first]=d[p.first]+i.second;
				pque.push(P(i.first,d[i.first]));
			}
		}
	}
	pque.push(P(g,0));
	e[g]=0;
	while(!pque.empty()){
		P p=pque.top();pque.pop();
		if(p.second>e[p.first])continue;
		for(P i:E[p.first]){
			if(e[i.first]>e[p.first]+i.second){
				e[i.first]=e[p.first]+i.second;
				pque.push(P(i.first,e[i.first]));
			}
		}
	}
	cout<<a-b-d[g]-e[s]<<endl;
}