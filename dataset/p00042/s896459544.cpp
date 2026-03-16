#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

short dk[10001][1001];

int main(){
	int i,j,takara[1001][2],w,n,c,maxv;
	c=0;
	while(0<=scanf("%d",&w)){
		if(w==0)break;
		scanf("%d",&n);
		++c;
		
		for(i=1;i<=n;i++){
			scanf("%d,%d",&takara[i][0],&takara[i][1]);
		}
		
		memset(dk,0,sizeof(dk));
		
		for(i=1;i<=n;i++){
			for(j=1;j<=w;j++){
				if(j>=takara[i][1]){
					dk[i][j]=(dk[i-1][j-takara[i][1]]+takara[i][0]>dk[i-1][j] ? dk[i-1][j-takara[i][1]]+takara[i][0]:dk[i-1][j]);
					continue;
				}
				dk[i][j]=dk[i-1][j];
			}
		}
		
		maxv=dk[n][w];
		
		for(i=0;i<=w;i++){
			if(maxv==dk[n][i])break;
		}
		
		printf("Case %d:\n",c);
		printf("%d\n%d\n",maxv,i);
	}
	return 0;
}