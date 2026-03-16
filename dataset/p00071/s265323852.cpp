#include<iostream>
#include<cstdio>
using namespace std;
int field[8][8];
void bomb(int x,int y);
int main(){
	int n;
	cin >>n;
	for(int i=1; i<=n; i++){
		for(int y=0;y<8;y++){
			for(int x=0;x<8;x++){
				scanf("%1d",&field[x][y]);
			}
		}
		int px,py;
		cin >>px>>py;
		bomb(px-1,py-1);
		cout <<"Data "<<i<<":"<<endl;
		for(int y=0;y<8;y++){
			for(int x=0;x<8;x++){
				cout <<field[x][y];
			}
			cout <<endl;
		}
	}
	return 0;
}
void bomb(int x,int y){
	field[x][y] = 0;
	for(int i=1; i<4; i++){
		if(x-i>=0){if(field[x-i][y]){bomb(x-i,y);}}
		if(x+i<=7){if(field[x+i][y]){bomb(x+i,y);}}
		if(y-i>=0){if(field[x][y-i]){bomb(x,y-i);}}
		if(y+i<=7){if(field[x][y+i]){bomb(x,y+i);}}
	}
}