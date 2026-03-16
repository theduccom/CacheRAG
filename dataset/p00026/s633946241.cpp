#include <stdio.h>
#include<math.h>
using namespace std;

bool rangeCheck(int x,int y){
	if(x >= 0 && x <= 9 && y>=0 && y <= 9)return true;
	else{
		return false;
	}
}

int main(){
	int paper[10][10],x,y,size;
	for(int i=0;i<10;i++){
		for(int k=0;k<10;k++){
			paper[i][k] = 0;
		}
	}

	while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
		switch(size){
		case 1:
			paper[x][y]++;
			if(rangeCheck(x,y-1))paper[x][y-1]++;
			if(rangeCheck(x,y+1))paper[x][y+1]++;
			if(rangeCheck(x-1,y))paper[x-1][y]++;
			if(rangeCheck(x+1,y))paper[x+1][y]++;
			break;
		case 2:
			paper[x][y]++;
			if(rangeCheck(x-1,y-1))paper[x-1][y-1]++;
			if(rangeCheck(x,y-1))paper[x][y-1]++;
			if(rangeCheck(x+1,y-1))paper[x+1][y-1]++;
			if(rangeCheck(x-1,y))paper[x-1][y]++;
			if(rangeCheck(x+1,y))paper[x+1][y]++;
			if(rangeCheck(x-1,y+1))paper[x-1][y+1]++;
			if(rangeCheck(x,y+1))paper[x][y+1]++;
			if(rangeCheck(x+1,y+1))paper[x+1][y+1]++;
			break;
		case 3:
			paper[x][y]++;
			if(rangeCheck(x-1,y-1))paper[x-1][y-1]++;
			if(rangeCheck(x,y-1))paper[x][y-1]++;
			if(rangeCheck(x+1,y-1))paper[x+1][y-1]++;
			if(rangeCheck(x-1,y))paper[x-1][y]++;
			if(rangeCheck(x+1,y))paper[x+1][y]++;
			if(rangeCheck(x-1,y+1))paper[x-1][y+1]++;
			if(rangeCheck(x,y+1))paper[x][y+1]++;
			if(rangeCheck(x+1,y+1))paper[x+1][y+1]++;
			if(rangeCheck(x,y-2))paper[x][y-2]++;
			if(rangeCheck(x-2,y))paper[x-2][y]++;
			if(rangeCheck(x+2,y))paper[x+2][y]++;
			if(rangeCheck(x,y+2))paper[x][y+2]++;
			break;
		}
	}

	int count = 0,max = -1;
	for(int i=0; i< 10;i++){
		for(int k=0; k < 10; k++){
			if(paper[i][k] == 0)count++;
			max = (max >= paper[i][k])?max:paper[i][k];
		}
	}
	printf("%d\n%d\n",count,max);

    return 0;
}