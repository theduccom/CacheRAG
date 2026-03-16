#include<cstdio>
#include<algorithm>
using namespace std;
#define INF 9999999
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	
	int D[36][36];/*Adjacency matrix*/
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j)continue;
			D[i][j] = INF;
		}
	}
	
	for(int i = 0; i < m; i++){
		int a,b,c,d;
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		D[a][b] = c;
		D[b][a] = d;
	}
	int ans = 0;
	int go,back,y1,y2;
	scanf("%d,%d,%d,%d",&go,&back,&y1,&y2);
	ans = y1-y2;
	int cost = 0;
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				D[i][j] = min(D[i][j],D[i][k]+D[k][j]);
			}
		}
	}
	cost = D[go][back] + D[back][go];
	
	printf("%d\n",ans-cost);
	return 0;
}