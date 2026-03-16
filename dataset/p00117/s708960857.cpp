#include<cstdio>
#include<algorithm>

#define INF 1000000000

using namespace std;

int cost[32][32];	//[i][j]ªi©çjÖÌRXg
int d[32];			//s©çÌÅ¬RXg
bool used[32];		//gíê½©Ç¤©
int N;				//¸_


void dijkstra(int s){
	//ú»
	fill(d, d + 32, INF);
	fill(used,used+32,false);
	d[s] = 0;
	
	
	while(true){
		int v = -1;
		//gíêÄ¢È¢àÌÅÅ¬ÌàÌðT·
		for(int i = 1; i <= N; i++){
			if(used[i]  == false && (v == -1 || d[i] < d[v]))v = i;
		}
		if(v == -1)break;
		
		used[v] = true;
		
		for(int i = 1; i <= N; i++){
			d[i] = min(d[v]+cost[v][i],d[i]);
		}
	}
}	
	
int main(void){
	while(scanf("%d", &N) != EOF){
//		scanf("%d", &N);
		int m;
		int a1,b1,c1,d1;
		int start,goal,money,price;
		int go,back;
		
		scanf("%d", &m);
		
		//ú»
		for(int i = 0; i <= N; i++){
			for(int j = 0; j <= N; j++){
				cost[i][j] = INF;
			}
		}
		for(int i = 0; i < m; i++){
			scanf("%d,%d,%d,%d", &a1, &b1, &c1, &d1);
			cost[a1][b1] = c1;
			cost[b1][a1] = d1;
		}
		
		scanf("%d,%d,%d,%d", &start, &goal, &money, &price);
		
		
		dijkstra(start);
		go = d[goal];
		
		dijkstra(goal);
		back = d[start];
		
		printf("%d\n",money-price-go-back);
	}
	return 0;
}