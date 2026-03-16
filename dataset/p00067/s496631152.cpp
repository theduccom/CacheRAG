#include <stdio.h>
bool setMap();
void search(int x,int y);
int map[12][12];
int w=12;
int h=12;


int main(void)
{
	while(setMap()){
	}
}

bool setMap(){
	char t;
	int count=0;
	int r;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			
			r=scanf(" %c ",&t);
			if(r<1){
				return false;
			}
			
			map[i][j]=t-'0';
		}
	}
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(map[i][j]==1){
				search(j,i);
				count++;
			}
		}
	}
	printf("%d\n",count);
	return true;
}


void search(int x,int y){
	if(w>x && x>=0 && h>y && y>=0 && map[y][x]==1){
		map[y][x]=0;
		search(x+1,y);
		search(x-1,y);
		search(x,y+1);
		search(x,y-1);
	}
}