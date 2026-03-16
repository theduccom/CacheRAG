#include<stdio.h>
#include<string.h>

int main(){
	int kami[14][14],x,y,size,i,j,max,siro;
	memset(kami,0,sizeof(kami));
	
	while(0<=scanf("%d,%d,%d",&x,&y,&size)){
		if(size==1){
			kami[x+1][y+2]+=1;
			kami[x+2][y+1]+=1;
			kami[x+2][y+2]+=1;
			kami[x+2][y+3]+=1;
			kami[x+3][y+2]+=1;
		}else if(size==2){
			kami[x+1][y+1]+=1;
			kami[x+1][y+2]+=1;
			kami[x+1][y+3]+=1;
			kami[x+2][y+1]+=1;
			kami[x+2][y+2]+=1;
			kami[x+2][y+3]+=1;
			kami[x+3][y+1]+=1;
			kami[x+3][y+2]+=1;
			kami[x+3][y+3]+=1;
		}else if(size==3){
			kami[x][y+2]+=1;
			kami[x+1][y+1]+=1;
			kami[x+1][y+2]+=1;
			kami[x+1][y+3]+=1;
			kami[x+2][y]+=1;
			kami[x+2][y+1]+=1;
			kami[x+2][y+2]+=1;
			kami[x+2][y+3]+=1;
			kami[x+2][y+4]+=1;
			kami[x+3][y+1]+=1;
			kami[x+3][y+2]+=1;
			kami[x+3][y+3]+=1;
			kami[x+4][y+2]+=1;
		}
		
	}
	max=0;
	siro=0;
	
	for(i=2;i<12;i++){
		for(j=2;j<12;j++){
			if(kami[i][j]==0)++siro;
			if(max<kami[i][j])max=kami[i][j];
		}
	}
	printf("%d\n%d\n",siro,max);
	return 0;
}