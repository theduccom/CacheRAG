#include<cstdio>
#include<iostream>

using namespace std;

int main(void){

	int block[7][3*2]={
		{ 1, 0,  0, 1,  1, 1},
		{ 0, 1,  0, 2,  0, 3},
		{ 1, 0,  2, 0,  3, 0},
		{ 0, 1, -1, 1, -1, 2},
		{ 1, 0,  1, 1,  2, 1},
		{ 0, 1,  1, 1,  1, 2},
		{ 1, 0,  0, 1, -1, 1},
	};
	int field[8][8];
	int ycnt=0,xcnt=0;
	int swit=0,flag;
	int xsta,ysta;
	char inp;

	while(cin>>inp){

		if(inp=='0'){
			field[ycnt][xcnt]=0;
			xcnt++;
		}

		if(inp=='1'){
			field[ycnt][xcnt]=1;
			if(swit==0){
				xsta=xcnt;
				ysta=ycnt;
				swit=1;
			}
			xcnt++;
		}

		if(xcnt==8){
			xcnt=0;
			ycnt++;
		}

		if(ycnt==8){
			xcnt=0;
			ycnt=0;
			swit=0;
			for(int i=0;i<7;i++){
				flag=1;
				for(int j=0;j<6;j+=2){
					if(ysta+block[i][j+1]>=0&&ysta+block[i][j+1]<8&&xsta+block[i][j]>=0&&xsta+block[i][j]<8){
						if(field[ysta+block[i][j+1]][xsta+block[i][j]]!=1){
							flag=0;
						}
					}
					else{
						flag=0;
					}
				}
				if(flag==1){
					cout<<(char)('A'+i)<<endl;
					break;
				}
			}
		}
	}

	return 0;
}