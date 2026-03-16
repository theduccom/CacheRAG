#include<iostream>
#include<cstdio>
#include<cmath>
#include <string> 
using namespace std;

int main(){
	int x,y,board[12][12],c=0,k=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			board[i][j]=0;
		}
	}	
	char input[5];
	while( scanf("%s",&input)!=EOF){
		x=input[0]-'0';
		y=input[2]-'0';
		if(input[4]=='1'){
			board[x][y]++;
			board[x+1][y]++;
			board[x-1][y]++;
			board[x][y+1]++;
			board[x][y-1]++;
		}
		if(input[4]=='2'){
			board[x][y]++;
			board[x+1][y]++;
			board[x-1][y]++;
			board[x][y+1]++;
			board[x][y-1]++;
			board[x+1][y+1]++;
			board[x-1][y-1]++;
			board[x-1][y+1]++;
			board[x+1][y-1]++;
		}
		if(input[4]=='3'){
			board[x][y]++;
			board[x+1][y]++;
			board[x-1][y]++;
			board[x][y+1]++;
			board[x][y-1]++;
			board[x+1][y+1]++;
			board[x-1][y-1]++;
			board[x-1][y+1]++;
			board[x+1][y-1]++;
			board[x+2][y]++;
			board[x-2][y]++;
			board[x][y+2]++;
			board[x][y-2]++;
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(board[i][j]==0){
				c++;
			}
			if(board[i][j]>k){
				k=board[i][j];
			}
		}
	}
	printf("%d\n%d\n",c,k);
	
			
	return 0;
}