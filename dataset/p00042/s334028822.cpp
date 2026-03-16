#include<cstdio>
using namespace std;
int za[10001][10001],kati[10001],omo[1001];
int main(void)
{
	int w,n,i,j,x,p,max,mm;
	x=0;

	scanf("%d",&w);
	scanf("%d",&n);
	while(!(w==0)){
		for(i=0;i<=n;i++){
			for(j=0;j<=w;j++){
				za[i][j]=-1;
			}
		}
		for(i=0;i<n;i++){
			scanf("%d,%d",&kati[i],&omo[i]);
		}
		za[0][0]=0;
		for(i=0;i<n;i++){
			for(j=0;j<=w;j++){
				if(za[i][j]!=-1){
					if(za[i+1][j+omo[i]]<za[i][j]+kati[i] && j+omo[i]<=w){
						za[i+1][j+omo[i]]=za[i][j]+kati[i];
						
					}
					if(za[i+1][j]<za[i][j]){
						za[i+1][j]=za[i][j];
					}
				}
			}
		}
		/*for(i=0;i<=n;i++){
			for(j=0;j<=w;j++){
				printf("%8d",za[i][j]);
			}
			printf("\n");
		}*/
		max=-1;
		mm=-1;
		for(i=0;i<=w;i++){
			if(za[n][i]!=-1){
				if(za[n][i]>max){
					max=za[n][i];
					mm=i;
				}
			}
		}
		x++;
		printf("Case %d:\n",x);
		printf("%d\n",max);
		printf("%d\n",mm);
		scanf("%d",&w);
		scanf("%d",&n);
	}
	
	return 0;
}