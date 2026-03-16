#include<iostream>

using namespace std;

int board[8][9];//y,xの順番

char data[10];

int isA(int x,int y){

	if(y==7 || x == 7){
		return 0;
	}
	if(board[y][x+1] == 1 && board[y+1][x+1] == 1 && board[y+1][x] == 1){
		return 1;
	}

	return 0;
}

int isB(int x,int y){
	if(y>=5){
		return 0;
	}
	else if(board[y+1][x]==1 && board[y+2][x] == 1 && board[y+3][x]==1){
		return 1;
	}

	return 0;
}

int isC(int x,int y){
	if(x>=5){
		return 0;
	}
	else if(board[y][x+1]==1 && board[y][x+2] == 1 && board[y][x+3]==1){
		return 1;
	}

	return 0;
}

int isD(int x,int y){
	if(y>=6 || x==0){
		return 0;
	}
	else if(board[y+1][x]==1 && board[y+2][x-1] == 1 && board[y+1][x-1]==1){
		return 1;
	}

	return 0;
}

int isE(int x,int y){
	if(x>=6 || y == 7){
		return 0;
	}
	else if(board[y][x+1]==1 && board[y+1][x+1] == 1 && board[y+1][x+2]==1){
		return 1;
	}

	return 0;
}

int isF(int x,int y){
	if(y>=6 || x==7){
		return 0;
	}
	else if(board[y+1][x]==1 && board[y+1][x+1] == 1 && board[y+2][x+1]==1){
		return 1;
	}

	return 0;
}

int isG(int x,int y){
	if(y==0 || x>=6){
		return 0;
	}
	else if(board[y][x+1]==1 && board[y-1][x+1] == 1 && board[y-1][x+2]==1){
		return 1;
	}

	return 0;
}

void dataChange(int i){
	for(int j=0;j<8;j++){
		board[i][j] = data[j] - '0';
	}
}

int main(){

	while(cin>>data){
		dataChange(0);

		for(int i=1;i<8;i++){
			cin>>data;
			dataChange(i);
		}

		for(int y=0;y<8;y++){
			for(int x=0;x<8;x++){
				if(board[y][x] == 1){
					if(isA(x,y) == 1){
						cout<<"A"<<endl;
					}
				}

				if(board[y][x] == 1){
					if(isB(x,y) == 1){
						cout<<"B"<<endl;
					}
				}
				if(board[y][x] == 1){
					if(isC(x,y) == 1){
						cout<<"C"<<endl;
					}
				}
				if(board[y][x] == 1){
					if(isD(x,y) == 1){
						cout<<"D"<<endl;
					}
				}
				if(board[y][x] == 1){
					if(isE(x,y) == 1){
						cout<<"E"<<endl;
					}
				}
				if(board[y][x] == 1){
					if(isF(x,y) == 1){
						cout<<"F"<<endl;
					}
				}
				if(board[y][x] == 1){
					if(isG(x,y) == 1){
						cout<<"G"<<endl;
					}
				}
			}
		}
	}

	return 0;
}