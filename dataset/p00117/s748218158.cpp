#include<iostream>
#include<cstdio>

#define REP(i,n) for(int i=1;i<=n;i++)
#define MAX 100
#define INT_MAX 100000
using namespace std;

int N;
int M[MAX][MAX];

void shortestPath(int src,int d[],int path[]){
	bool visited[MAX];//Sツづ可堕ョツつキツづゥツノツーツトツづ衡rue
	REP(i,N){
		d[i]=INT_MAX;
		visited[i]=false;
	}
	
	d[src]=0;
	path[src]=-1;

	while(1){
		int u;
		int mincost=INT_MAX;
		REP(i,N){
			if(!visited[i] && d[i]<mincost){
				mincost=d[i];
				u=i;
			}
		}

		if(mincost==INT_MAX)break;

		visited[u]=true;
		REP(v,N){
			if(visited[v]||M[u][v]==INT_MAX)continue;
			if(d[u]+M[u][v] <d[v]){
				d[v]=d[u]+M[u][v];
				path[v]=u;
			}
		//REP(i,N)cout<<d[i]<<endl;
		//cout<<endl;
		}
	}
}

int main(void){
	int m;
	cin>>N>>m;
	int a1,b1,c1,d1;
	REP(i,N)REP(j,N)M[i][j]=INT_MAX;
	REP(i,m){
		scanf("%d,%d,%d,%d",&a1,&b1,&c1,&d1);
		M[a1][b1]=c1;
		M[b1][a1]=d1;
	/*	
	REP(k,N){
		REP(j,N){
			cout<<M[k][j];
		}
		cout<<endl;
	}
		cout<<endl;
	*/
	}
	int start,end,syozi,hashira;
	scanf("%d,%d,%d,%d",&start,&end,&syozi,&hashira);
	int d[21],path[21];
	shortestPath(start,d,path);
	int go,back;
	go=d[end];//ツ行ツつォツつェツつッツづ個コツスツト
	shortestPath(end,d,path);
	back=d[start];//ツ帰ツづィツつェツつッツづ個コツスツト

	cout<<syozi-hashira-go-back<<endl;	
}