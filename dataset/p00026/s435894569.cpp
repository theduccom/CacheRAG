#include<stdio.h>

int main(){
	int i,j,x,y,size,map[15][15]={0},noud=0,no=0;
	while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
		switch(size){
			case 3:
				map[x][y+2]++;
				map[x+2][y]++;
				map[x+2][y+4]++;
				map[x+4][y+2]++;
			case 2:
				map[x+1][y+1]++;
				map[x+1][y+3]++;
				map[x+3][y+1]++;
				map[x+3][y+3]++;
			case 1:
				map[x+1][y+2]++;
				map[x+2][y+1]++;
				map[x+2][y+2]++;
				map[x+3][y+2]++;
				map[x+2][y+3]++;
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(map[i+2][j+2]==0)no++;
			if(map[i+2][j+2]>noud)noud=map[i+2][j+2];
		}
	}
	printf("%d\n%d\n",no,noud);
}