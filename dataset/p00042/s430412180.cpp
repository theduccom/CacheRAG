#include<stdio.h>
#include<string.h>
#include<math.h>
int a,s,d[1001],f[1001],g[1001][1001],h,i,j,z,x;
int main(void)
{
	x=1;
	while(1){
		scanf("%d",&a);
		if(a==0)	break;
		scanf("%d",&s);
		for(i=0;i<s;i++)
			scanf("%d,%d",&d[i],&f[i]);
		for(i=0;i<=s;i++){
			for(j=0;j<=a;j++)
				g[i][j]=-1;
		}
		g[0][0]=0;
		for(i=0;i<=s;i++){
			for(j=0;j<=a;j++){
				if(g[i][j]!=-1){
					if(g[i][j]>g[i+1][j])
						g[i+1][j]=g[i][j];
					if(j+f[i]<=a){
						if(g[i][j]+d[i]>g[i+1][j+f[i]])
							g[i+1][j+f[i]]=g[i][j]+d[i];
					}
				}
			}
		}
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
		x++;
	}
	return 0;
}