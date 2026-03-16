#include<iostream>
using namespace std;

char nyuryoku[12][12];

void fun(int y,int x,char masume){
	if((x<0)||(12<=x)||(y<0)||(12<=y)){
		return;
	}
	if(masume!=nyuryoku[y][x])
		return;
	else
		nyuryoku[y][x]='+';
	fun(y+1,x,masume);
	fun(y-1,x,masume);
	fun(y,x+1,masume);
	fun(y,x-1,masume);
}

int main(){
	while(cin >> nyuryoku[0][0]){
		for(int j=1;j<12;j++)
			cin >> nyuryoku[0][j];
		for(int i=1;i<12;i++){
			for(int j=0;j<12;j++){
				cin >> nyuryoku[i][j];
			}
		}
		int count=0;
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(nyuryoku[i][j]!='+'){
					if(nyuryoku[i][j]=='1')
						count++;
					fun(i,j,nyuryoku[i][j]);
				}
			}
		}
		cout << count << endl;
	}
}