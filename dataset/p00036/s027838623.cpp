#include<iostream>
#include<algorithm>
using namespace std;

bool vd(int x, int y){
	return x>=0 && y>=0 && y<8 && x<8;
}

char solve(char sol[6]){
//	for(int x=0;x<6;++x)cout<<sol[x]<<" ";
	if(sol[0]=='0' && sol[1]=='1' && sol[2]=='0' && sol[3]=='0' && sol[4]=='1' && sol[5]=='1')return 'F';
	if(sol[0]=='0' && sol[1]=='1' && sol[2]=='1' && sol[3]=='1' && sol[4]=='1' && sol[5]=='0')return 'G';
	if(sol[0]=='0' && sol[1]=='1' && sol[2]=='1' && sol[3]=='0' && sol[4]=='0' && sol[5]=='1')return 'E';
	if(sol[0]=='0' && sol[1]=='1' && sol[2]=='0' && sol[3]=='1' && sol[4]=='1' && sol[5]=='0')return 'D';
	if(sol[0]=='0' && sol[1]=='1' && sol[2]=='1' && sol[3]=='0' && sol[4]=='0' && sol[5]=='0')return 'C';
	if(sol[0]=='0' && sol[1]=='1' && sol[2]=='0' && sol[3]=='0' && sol[4]=='1' && sol[5]=='0')return 'B';
	return 'A';
}

int main(){
	char j;
	char mat[8][8];
	while(cin>>j){
		pair<int,int> init = make_pair(-1,-1);
		mat[0][0] = j;
		if(j=='1'){
			init.first = 0;init.second = 0;
		}
		for(int x=1;x<64;++x){
			cin>>j;mat[x/8][x%8] = j;
			if(j=='1' && init.first == -1){
				init.first = x/8;
				init.second = x%8;

			}
		}
		//cout<<init.first<<":"<<init.second<<endl;
		char sol[6];
		int cnt = 0;
		for(int x=0;x<2;++x){
			for(int y=-1;y<2;++y){
				if(vd(init.first + x , init.second + y)){
					sol[cnt++] = mat[init.first + x][init.second + y];
				}else{
					sol[cnt++] = '0';
				}
			}
		}
		cout<<solve(sol)<<endl;
	}		
	return 0;
}