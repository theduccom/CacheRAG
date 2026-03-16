#include<stdio.h>

int ma[8][8];

int main(){
	int n,data=0,i,j,x,y,a,b;
	
	scanf("%d",&n);
	
	for(;n>0;--n){
		++data;
		for(i=0;i<8;++i){
			for(j=0;j<8;j++){
				scanf("%1d",&ma[i][j]);
			}
		}
		scanf("%d%d",&x,&y);
		--x;
		--y;
		ma[y][x]=0;
		for(i=x-3;i<=x+3;i++){
			if(0<=i && i<8 ){
				if(ma[y][i]==1){
					ma[y][i]=2;
				}else{
					ma[y][i]=0;
				}
			}
		}
		
		for(i=y-3;i<=y+3;++i){
			if(0<=i && i<8){
				if(ma[i][x]==1){
					ma[i][x]=2;
				}else{
					ma[i][x]=0;
				}
			}
		}
		
		int flag=1;
		while(flag){
			flag=0;
			
			for(a=0;a<8;a++){
				for(b=0;b<8;b++){
					if(ma[a][b]==2){
						y=a;
						x=b;
						
						ma[y][x]=0;
						for(i=x-3;i<=x+3;i++){
							if(0<=i && i<8 ){
								if(ma[y][i]>0){
									ma[y][i]=2;
									flag=1;
								}else{
									ma[y][i]=0;
								}
							}
						}
						
						for(i=y-3;i<=y+3;++i){
							if(0<=i && i<8){
								if(ma[i][x]>0){
									ma[i][x]=2;
									flag=1;
								}else{
									ma[i][x]=0;
								}
							}
						}
					}
				}
			}
		}
		
		printf("Data %d:\n",data);
		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				printf("%d",ma[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}