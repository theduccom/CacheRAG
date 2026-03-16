#include <iostream>
#include <cstdio>

using namespace std;

char field[8][8];

bool check(int y,int x){
	return 0<=y && y<8 && 0<=x && x<8 && field[y][x];
}

int main(void){
	int i,j,y,x;

	while(cin>>field[0]){
		for(i=1;i<8;i++){
			cin>>field[i];
		}

		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				field[i][j]-='0';
			}
		}

		for(y=0;y<8;y++){
			for(x=0;x<8;x++){
				if(field[y][x]==1){
					if(check(y+1,x) && check(y+2,x)) cout<<"B"<<endl;
					else if(check(y,x+1) && check(y,x+2)) cout<<"C"<<endl;
					else if(check(y+1,x) && check(y,x+1) && check(y+1,x+1)) cout<<"A"<<endl;
					else if(check(y+1,x) && check(y+1,x-1) && check(y+2,x-1)) cout<<"D"<<endl;
					else if(check(y,x+1) && check(y+1,x+1) && check(y+1,x+2)) cout<<"E"<<endl;
					else if(check(y+1,x) && check(y+1,x+1) && check(y+2,x+1)) cout<<"F"<<endl;
					else if(check(y,x+1) && check(y+1,x) && check(y+1,x-1)) cout<<"G"<<endl;
					y=x=8;
				}
			}
		}
	}
	return 0;
}