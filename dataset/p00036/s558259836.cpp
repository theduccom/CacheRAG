#include<iostream>
#include<string>
using namespace std;
bool check(int (&field)[8][8],int x,int y){
	if(x<0 || x>=8 || y<0 || y>=8 || (field[y][x] == 0)){
		return false;
	}
	return true;
}

int main(){
	int inptf[8][8] = {0}, i, j, x, y;
	string str;
	char btype;
	while(true){
		i=0;
		while(cin>>str){
			for(j=0;j<8;j++){
				inptf[i][j] = str[j] - '0';
			}
			i++;
			if(i==8) break;
		}
		if(i<8) break;
		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				if(inptf[i][j] != 0){
					y = i;
					x = j;
					i=j=8;
				}
			}
		}
		if(check(inptf , x, y) &&	//[][] A
		   check(inptf , x, y+1) &&	//[][]
		   check(inptf , x+1, y) &&	
		   check(inptf , x+1, y+1))	
			btype='A';
			
		if(check(inptf , x, y) &&	//[] B
		   check(inptf , x, y+1) &&	//[]
		   check(inptf , x, y+2) &&	//[]
		   check(inptf , x, y+3))	//[]
			btype='B';
		if(check(inptf , x, y) &&	//[][][][] C
		   check(inptf , x+1, y) &&	
		   check(inptf , x+2, y) &&	
		   check(inptf , x+3, y))	
			btype='C';
		if(check(inptf , x, y) &&	//  [] D
		   check(inptf , x, y+1) &&	//[][]
		   check(inptf , x-1, y+1) &&	//[]
		   check(inptf , x-1, y+2) )	
			btype='D';
		if(check(inptf , x, y) &&	//[][] E
		   check(inptf , x+1, y) &&	//  [][]
		   check(inptf , x+1, y+1) &&	
		   check(inptf , x+2, y+1))	
			btype='E';
		if(check(inptf , x, y) &&	//[]   F
		   check(inptf , x, y+1) &&	//[][]
		   check(inptf , x+1, y+1) &&	//  []
		   check(inptf , x+1, y+2))	
			btype='F';
		if(check(inptf , x, y) &&	//  [][]G
		   check(inptf , x+1, y) &&	//[][]
		   check(inptf , x, y+1) &&
		   check(inptf , x-1, y+1))	
			btype='G';
		cout<<btype<<endl;
	}
}