#include<stdio.h>
int main(void)
{
	int p[15][15];
	int x,y,z;
	int i,j;
	int max,cnt;
	max=0;
	cnt=0;
	
	for(i=0;i<14;i++){
		for(j=0;j<14;j++){
			p[i][j]=0;
		}
	}
	while(scanf("%d,%d,%d",&x,&y,&z)!=EOF){
		p[x+2][y+2]++;
		p[x+3][y+2]++;
		p[x+1][y+2]++;
		p[x+2][y+3]++;
		p[x+2][y+1]++;
		if(z==2){
			p[x+3][y+3]++;
			p[x+3][y+1]++;
			p[x+1][y+3]++;
			p[x+1][y+1]++;
		}
		else if(z==3){
			p[x+3][y+3]++;
			p[x+3][y+1]++;
			p[x+1][y+3]++;
			p[x+1][y+1]++;
			p[x+4][y+2]++;
			p[x][y+2]++;
			p[x+2][y+4]++;
			p[x+2][y]++;
		}
	/*	for(i=2;i<12;i++){
			for(j=2;j<12;j++){
				printf("%d ",p[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	*/}
	for(i=2;i<12;i++){
		for(j=2;j<12;j++){
			if(p[i][j]==0){
				cnt++;
			}
			else if(max<p[i][j]){
				max=p[i][j];
			}
		}
	}
	printf("%d\n%d\n",cnt,max);
	return 0;
}