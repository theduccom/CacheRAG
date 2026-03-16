#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

char board[100][100];
int boardf[100][100];


void search(int a,int b){
	if(boardf[a][b] == 1){
		cout << "LOOP" << endl;
		return ;
	}
	boardf[a][b] = 1;
	if(board[a][b] == '.'){
		cout << b << " " << a << endl;
		return;
	}
	if(board[a][b] == '>'){
		search(a,b+1);
	}else if(board[a][b] == '<'){
		search(a,b-1);
	}else if(board[a][b] == '^'){
		search(a-1,b);
	}else if(board[a][b] == 'v'){
		search(a+1,b);
	}
}

int main(){
	int a,b;
	char c;
	while(cin >> a >> b){
		if(a==0&&b==0){
			return 0;
		}
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				boardf[i][j] = 0;
			}
		}
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> c;
				board[i][j] = c;
			}
		}		
		
		search(0,0);

		/*for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout << board[i][j] << " ";
			}
			cout << endl;
		}*/		
	}
	return 0;
}
	