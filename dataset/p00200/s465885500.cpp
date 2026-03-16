#include<stdio.h>
#include<string.h>
#define MAX 101
#define INT_MAX 100000000
#define min(a,b) (a>b?b:a)
int N;
int M[2][MAX][MAX];

void dijkstra( int s, int q,int flag){
    char visited[MAX]; // S É®·ém[hÍ true
	int d[MAX];
	int i;
    for (i = 1; i <= N; i++ ){
        d[i] = INT_MAX;
        visited[i] = 0;
    }
    
    d[s] = 0; // ÅÉ s ª u ÆµÄIÎêé
    
    while( 1 ){
        int u; // ÅKÈm[h u ðIÔ
        int mincost = INT_MAX;
        for ( i = 1; i <= N; i++ ){
            if ( !visited[i] && d[i] < mincost ){
                mincost = d[i]; u = i;
            }
        }
        
        // u ª¶ÝµÈ©Á½Æ«AÂÜè S ª±êÈã¦È¢Æ«AI¹
        if ( mincost == INT_MAX ) break;
        
        visited[u] = 1; // u ð S ÉÇÁ
        int v;
        for (  v = 1; v <= N; v++ ){
            // v ª S ÉÜÜêéê@Ü½Í@GbW(u, v)ªÈ¢êÍ@³
            if ( visited[v] || M[flag][u][v] == INT_MAX ) continue;
            d[v] = ( d[v]> d[u] + M[flag][u][v]?d[u]+M[flag][u][v]:d[v] );
        }
    }
	printf("%d\n",d[q]);
}

int main(){
	int m,i,j,a,b,c,t,k,p,q,r;
	
	while(~scanf("%d%d",&m,&N)){
		if(N==0 && m==0)break;
		
		for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				M[0][i][j]=INT_MAX;
				M[1][i][j]=INT_MAX;
			}
		}
		
		for(i=0;i<m;i++){
			scanf("%d%d%d%d",&a,&b,&c,&t);
			M[0][a][b]=c;
			M[0][b][a]=c;
			M[1][a][b]=t;
			M[1][b][a]=t;
		}
		scanf("%d",&k);
		for(i=0;i<k;i++){
			scanf("%d%d%d",&p,&q,&r);
			dijkstra(p,q,r);
		}
	}
	return 0;
}