#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <queue>


#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;
struct stk {
	int y, x;
	stk(int y, int x) : y(y), x(x) { }
};

string bd[14];

void chil(int y, int x, char cl){
int	dx[]={1,-1,0,0};
int	dy[]={0,0,1,-1};
	queue< stk > que;
	que.push(stk(y,x));
	while(!que.empty()){
		stk cr = que.front();
		que.pop();
		if(bd[cr.y][cr.x] == '1') bd[cr.y][cr.x] = cl;
		rep(i,4){
			if(bd[cr.y+dy[i]][cr.x+dx[i]] == '1'){
				que.push(stk(cr.y+dy[i], cr.x+dx[i]));
			}
		}
	}
}
void showw(){
	rep(i,14){ rep(j,14) cout << bd[i][j];
					cout << endl; }

}	

int main(void){

string ws;


	while(!cin.eof()){
		int cnt=0;
		rep(i,12){
			getline(cin,ws);
			if(cin.eof()) break;
			if(ws=="") break;
			bd[i+1] = "0" + ws + "0";
		}
		
		if(ws=="") continue;
		rep(i,14) rep(j,14)
			if(bd[i][j] == '1'){
				cnt++;
				char cl= 'a' + cnt;
				chil(i,j,cl);
			}
		cout << cnt << endl;
//		showw();
	}		
	return 0;
	
}