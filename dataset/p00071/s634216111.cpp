#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

bool rangeCheck(int row,int col){
	if(row >= 0 && row <= 7 && col >= 0 && col <= 7)return true;
	else{
		return false;
	}
}

void bomb(char table[8][9],int row,int col){
	table[row][col] = '0';

	for(int i=1; i <=3; i++){
		if(rangeCheck(row,col-i)&&table[row][col-i] == '1')bomb(table,row,col-i);
		if(rangeCheck(row,col+i)&&table[row][col+i] == '1')bomb(table,row,col+i);
		if(rangeCheck(row-i,col)&&table[row-i][col] == '1')bomb(table,row-i,col);
		if(rangeCheck(row+i,col)&&table[row+i][col] == '1')bomb(table,row+i,col);
	}
}

int main(){

	int n,row,col,count = 1;
	char table[8][9];

	scanf("%d",&n);
	getchar();

	for(int i=0;i<n;i++){
		for(int k=0;k < 8; k++){
			scanf("%s",table[k]);
		}

		scanf("%d",&col);
		scanf("%d",&row);
		getchar();
		row = row-1;
		col = col-1;
		bomb(table,row,col);

		printf("Data %d:\n",count++);
		for(int k = 0; k < 8; k++){
			printf("%s\n",table[k]);
		}
	}

	return 0;
}