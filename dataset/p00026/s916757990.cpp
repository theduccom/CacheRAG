#include<stdio.h>
int main()
{
	int x,y,s,p[10][10]={0},nou=0,nul=0;
	while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
		p[x][y]++;
		if(x!=0){
			p[x-1][y]++;
		}
		if(x<9){
			p[x+1][y]++;
		}
		if(y!=0){
			p[x][y-1]++;
		}
		if(y<9){
			p[x][y+1]++;
		}
		if(s!=1){
			if(x!=0){
				if(y!=0){
					p[x-1][y-1]++;
				}
				if(y<9){
					p[x-1][y+1]++;
					}

			}
			if(x<9){
				if(y!=0){
					p[x+1][y-1]++;
				}
				if(y<9){
					p[x+1][y+1]++;
				}
			}
		}
		if(s==3){
			if(x>2){
				p[x-2][y]++;
			}
			if(y>2){
				p[x][y-2]++;
			}


			if(x<8){
				p[x+2][y]++;
			}
			if(y<8){
				p[x][y+2]++;
			}
		}

	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(p[i][j]==0){
				nul++;
			}
			if(p[i][j]>nou){
				nou=p[i][j];
			}
		}
	}
	printf("%d\n%d\n",nul-1,nou);
	return 0;
}