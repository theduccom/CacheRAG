#include<stdio.h>
int a,b,c[1001][1001],d[1001],e[1001],m,mm,i,j,g=1;
int main(void)
{
	scanf("%d",&a);
	while(a!=0){
		m=0;
		mm=0;
		scanf("%d",&b);
		for(i=0;i<=b;i++){
			for(j=0;j<=a;j++){
				c[i][j]=-1;
			}
		}
		for(i=0;i<b;i++){
				scanf("%d,%d",&d[i],&e[i]);
		}
		c[0][0]=0;
		for(i=0;i<b;i++){
			for(j=0;j<=a;j++){
				if(c[i][j]>=0 && c[i][j]+d[i]>c[i+1][j+e[i]] && j+e[i]<=a){
					c[i+1][j+e[i]]=c[i][j]+d[i];
				}
				if(c[i][j]>=0 && c[i+1][j]<c[i][j]){
					c[i+1][j]=c[i][j];
				}
			}
			
		}
		for(j=0;j<=a;j++){
			if(c[b][j]>m){
				m=c[b][j];
				mm=j;
				//printf("c=%d j=%d\n",c[b][j],j);
			}
		}
		/*for(i=0;i<=b;i++){
			for(j=0;j<=a;j++){
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
		printf("%d\n",c[b][49]);*/
		printf("Case %d:\n%d\n%d\n",g,m,mm);
		g++;
		scanf("%d",&a);
	}	
	return 0;
}