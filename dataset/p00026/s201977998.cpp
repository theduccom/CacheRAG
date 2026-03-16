#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int field[30][30];
	for(int i=0; i<30; i++){
		for(int l=0; l<30; l++){
			field[i][l] = 0;
		}
	}
	for(;;){
		int x,y,size;
		if(scanf("%d,%d,%d",&x,&y,&size) == EOF){break;}
		field[x+10][y+10]++;
		field[x+10][y+9]++;
		field[x+9][y+10]++;
		field[x+10][y+11]++;
		field[x+11][y+10]++;
		if(size>1){
			field[x+9][y+9]++;
			field[x+9][y+11]++;
			field[x+11][y+9]++;
			field[x+11][y+11]++;
		}
		if(size>2){
			field[x+10][y+8]++;
			field[x+10][y+12]++;
			field[x+12][y+10]++;
			field[x+8][y+10]++;
		}
	}
	int max = 0, white = 0;
	for(int i=10; i<20; i++){
		for(int l=10; l<20; l++){
			if(field[i][l] == 0){white++;}
			if(max<field[i][l]){max = field[i][l];}
		}
	}
	cout <<white<<endl<<max<<endl;
}