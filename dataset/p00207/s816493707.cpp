#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <queue>

using namespace std;

int width,height,table[100][100];

bool rangeCheck(int row,int col){
	if(row >= 0 && row <= height-1 && col >= 0 && col <= width-1)return true;
	else{
		return false;
	}
}

void recursive(int row,int col){
	int tmp = table[row][col];
	table[row][col] = 7;

	if(rangeCheck(row-1,col) == true && table[row-1][col] == tmp)recursive(row-1,col);
	if(rangeCheck(row+1,col) == true && table[row+1][col] == tmp)recursive(row+1,col);
	if(rangeCheck(row,col-1) == true && table[row][col-1] == tmp)recursive(row,col-1);
	if(rangeCheck(row,col+1) == true && table[row][col+1] == tmp)recursive(row,col+1);
}

int main(){

	int x_s,y_s,x_g,y_g,n,color,dist,x,y;

	while(true){
		scanf("%d %d",&width,&height);
		if(width == 0 && height == 0)break;

		for(int i = 0; i < height; i++)
		{
			for(int k = 0; k < width; k++)table[i][k] = 0;
		}

		scanf("%d %d",&x_s,&y_s);
		scanf("%d %d",&x_g,&y_g);

		scanf("%d",&n);

		for(int i = 0; i < n; i++){
			scanf("%d %d %d %d",&color,&dist,&x,&y);

			if(dist == 0){
				for(int row = 0; row < 2; row++){
					for(int col = 0; col < 4; col++){
						table[y-1+row][x-1+col] = color;
					}
				}
			}else{
				for(int row = 0; row < 4; row++){
					for(int col = 0; col < 2; col++){
						table[y-1+row][x-1+col] = color;
					}
				}
			}
		}
		recursive(y_s-1,x_s-1);

		if(table[y_g-1][x_g-1] == 7)printf("OK\n");
		else{
			printf("NG\n");
		}
	}
	return 0;
}