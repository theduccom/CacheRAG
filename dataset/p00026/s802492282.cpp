#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int sdy[]={-1,0,0,1,0};
int sdx[]={0,-1,1,0,0};
int mdy[]={0,0,0,-1,-1,-1,1,1,1};
int mdx[]={-1,0,1,-1,0,1,-1,0,1};
int ldy[]={0,0,0,-1,-1,-1,1,1,1,2,0,0,-2};
int ldx[]={-1,0,1,-1,0,1,-1,0,1,0,-2,2,0};


int main(){

	int field[10][10];
	memset(field,0,sizeof(field));

	int x,y,size;
	char cm;
	while(cin>>x>>cm>>y>>cm>>size){
		//field[y][x]++;
		if(size==1){
			for(int i = 0; i < 5; i++){
				int py=y+sdy[i];
				int px=x+sdx[i];
				if(py>=0&&px>=0&&py<10&&px<10){
					field[py][px]++;
				}
			}
		}
		else if(size==2){
			for(int i = 0; i < 9; i++){
				int py=y+mdy[i];
				int px=x+mdx[i];
				if(py>=0&&px>=0&&py<10&&px<10){
					field[py][px]++;
				}
			}
		}
		else{
			for(int i = 0; i < 13; i++){
				int py=y+ldy[i];
				int px=x+ldx[i];
				if(py>=0&&px>=0&&py<10&&px<10){
					field[py][px]++;
				}
			}
		}
	}

	int maxConcentration=0;
	int cnt=0;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(field[i][j]==0)
				cnt++;
			maxConcentration=max(maxConcentration,field[i][j]);
		}
	}
	cout<<cnt<<endl;
	cout<<maxConcentration<<endl;

	return 0;
}