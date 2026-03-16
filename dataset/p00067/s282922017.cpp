#include<iostream>
#include<cstdio>
using namespace std;
int field[12][12];
void island(int x,int y,int h);
int main(){
	for(;;){
		for(int i=0; i<12; i++){
			for(int j=0; j<12; j++){
				if(scanf("%1d",&field[i][j]) == EOF){goto end;}
			}
		}
		int x = 1;
		for(int i=0; i<12; i++){
			for(int j=0; j<12; j++){
				if(field[i][j] == 1){island(i,j,++x);}
			}
		}
		cout <<x-1<<endl;
	}
	end:;
	return 0;
}
void island(int x,int y,int h){
	field[x][y] = h;
	if(x>0){if(field[x-1][y] == 1){island(x-1,y,h);}}
	if(y>0){if(field[x][y-1] == 1){island(x,y-1,h);}}
	if(x<11){if(field[x+1][y] == 1){island(x+1,y,h);}}
	if(y<11){if(field[x][y+1] == 1){island(x,y+1,h);}}
}