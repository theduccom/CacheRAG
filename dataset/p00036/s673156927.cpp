#include<iostream>
#include<cstdio>
using namespace std;

char n[12][12];
char figure[7][4][5] = {
	{"1100","1100","0000","0000"},
	{"1000","1000","1000","1000"},
	{"1111","0000","0000","0000"},
	{"0100","1100","1000","0000"},
	{"1100","0110","0000","0000"},
	{"1000","1100","0100","0000"},
	{"0110","1100","0000","0000"}
};


void clear(){
	for(int i=0; i<12; i++)
			n[i][8]='0';
}

int main(){
	for(int i=0; i<12; i++)
		for(int j=0; j<12; j++)
			n[i][j]='0';

	while(~scanf("%8s\n%8s\n%8s\n%8s\n%8s\n%8s\n%8s\n%8s\n\n", n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7])){
		clear();
		for(int i=0; i<7; i++){
			for(int j=0; j<8; j++){
				for(int k=0; k<8; k++){
					bool flag=true;
					
					for(int x=0; x<4; x++){
						for(int y=0; y<4; y++){
							if(figure[i][x][y] != n[j+x][k+y]) flag = false;
						}
					}
					
					if(flag){
						cout << (char)('A'+i) << endl;
					}

				}
			}
		}
	}
	return 0;
}