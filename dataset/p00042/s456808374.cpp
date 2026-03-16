#include<stdio.h>
int a,s,d[1001],f[1001],g[1001][1001],h,z,i,j,x;
int main(void)
{
	x=0;
	scanf("%d",&a);
	while(a!=0){
		x++;
		scanf("%d",&s);
		for(i=0;i<s;i++){
			scanf("%d,%d",&d[i],&f[i]);
		}
		for(i=0;i<=s;i++){
			for(j=0;j<=a;j++){
				g[i][j]=0;
			}
		}
		for(i=0;i<=s;i++){
			for(j=0;j<=a;j++){
				if(g[i+1][j+f[i]]<g[i][j]+d[i]&&j+f[i]<=a){
					g[i+1][j+f[i]]=g[i][j]+d[i];
				}
				if(g[i+1][j]<g[i][j]){
					g[i+1][j]=g[i][j];
				}
			}
		}
	/*	for(i=0;i<=s;i++){
			for(j=0;j<=a;j++){
				printf("%d ",g[i][j]);
			}
			printf("\n");
		}*/
		h=0;
		z=0;
		for(i=0;i<=a;i++){
			if(h<g[s][i]){
				h=g[s][i];
				z=i;
			}
		}
		printf("Case %d:\n",x);
		printf("%d\n%d\n",h,z);
		scanf("%d",&a);
	}

	return 0;
}