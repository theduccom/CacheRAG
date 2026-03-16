#include <iostream>
#include <vector>
#include <string>
using namespace std;
int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
vector<string>s(12);
void dfs(int x,int y){
	s[x][y]='0';
	for(int i=0;i<4;i++){
		int sx=x+dx[i];
		int sy=y+dy[i];
		if(0<=sx&&sx<12&&0<=sy&&sy<12&&s[sx][sy]=='1'){
			dfs(sx,sy);
		}
	}
	return ;
}

int main(){
	while(1){
		int cnt=0;
		for(int i=0;i<12;i++){
			if(!(cin >> s[i])) return 0;
		}
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(s[i][j]=='1'){
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}