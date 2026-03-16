#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>

#define MAX_V 25
#define INF 1e+8

using namespace std;

void dijkstra(int s);

int goCost[MAX_V][MAX_V],backCost[MAX_V][MAX_V];	//cost[u][v]は辺e=(u,v)のコスト(存在しない場合はINF)
int dist[MAX_V];	//頂点sからの最短距離
bool used[MAX_V];	//既に使われたかどうかのフラグ
int V;	//頂点数
int M;	//辺の数


int main(void){
	
	cin>>V;
	cin>>M;

	int a,b,c,d,sTown,gTown,reward,pay,ans;
	
	//ポインタにキャストして渡すと2次元配列が初期化出来る
	fill((int *)goCost,(int *)(goCost+MAX_V),(int)INF);    
	//fill((int *)backCost,(int *)(backCost+MAX_V),INF);
	
	for(int i=0;i<M;i++){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		goCost[a-1][b-1]=c;
		goCost[b-1][a-1]=d;
	}
	
	scanf("%d,%d,%d,%d",&sTown,&gTown,&reward,&pay);
	

	dijkstra(sTown-1);
	a=dist[gTown-1];
	dijkstra(gTown-1);
	b=dist[sTown-1];
	
	ans=reward-(a+b+pay);
	printf("%d\n",ans);
}

void dijkstra(int s){
	fill(dist,dist+V,(int)INF);
	fill(used,used+V,false);
	dist[s]=0;

	while(true){
		int v=-1;
		
		//まだ使われていない頂点のうち距離が最小のものを探す
		for(int u=0;u<V;u++){
			if(used[u]==false && (v==-1 || dist[u]<dist[v])){
				v=u;
			}
		}

		if(v==-1){
			break;
		}

		used[v]=true;

		for(int u=0;u<V;u++){
			dist[u]=min(dist[u],dist[v]+goCost[v][u]);			
		}
	}
}