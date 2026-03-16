#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
typedef long long int lli;
using namespace std;

int dx[7][4]={{0,0,1,1},{0,0,0,0},{0,1,2,3},{0,0,-1,-1},{0,1,1,2},{0,0,1,1},{0,-1,0,1}};
int dy[7][4]={{0,1,1,0},{0,1,2,3},{0,0,0,0},{0,1,1,2},{0,0,1,1},{0,1,1,2},{0,1,1,0}};
string MAP[8];
string ans="ABCDEFG";

int main(){
	while(1){
	for(int i=0; i<8; ++i){
		if(!(cin >> MAP[i])){
			return 0;
		}
	}
	for(int i=0; i<8; ++i){
		for(int j=0; j<8; ++j){
			if(MAP[i][j]=='1'){
				for(int k=0; k<7; ++k){
					bool ok=true;
					for(int l=0; l<4; ++l){
						int nx=j+dx[k][l];
						int ny=i+dy[k][l];
						if((0<=nx&&nx<8&&0<=ny&&ny<8&&MAP[ny][nx]!='1')||(nx<0||8<=nx||ny<0||8<=ny)){
							ok=false;
							break;
						}
					}
					if(ok){
						cout << ans[k] << "\n";
						break;
					}
				}
			}
		}
	}
	}
	return 0;
}