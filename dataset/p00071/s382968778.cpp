#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>

//AOJ0071
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;
struct stk {
	int y, x;
	stk(int y, int x) : y(y), x(x) { }
};

string bd[10];

void baku(int y, int x){

int ddx[]={-3,-2,-1,1,2,3, 0, 0, 0,0,0,0,0};
int ddy[]={ 0, 0, 0,0,0,0,-3,-2,-1,1,2,3,0};

	stack<stk> qtk;
	qtk.push(stk(y,x));
	while(!qtk.empty()){
		stk cr = qtk.top();
		qtk.pop();
		int yy=cr.y, xx=cr.x;
		if(bd[yy][xx] == '0') continue;
//		printf("\n(%d,%d)",yy,xx);
		bd[yy][xx]='0';
		rep(i,13){
			int dx=xx+ddx[i], dy=yy+ddy[i];
			if( dx >= 8 || dx < 0) continue;
			if( dy >= 8 || dy < 0) continue;
			if(bd[dy][dx] == '1'){
				qtk.push(stk(dy,dx));
//				printf("%d-%d, ",i,qtk.size());
			}
		}
	}

}

int main(void){
string ws,ww;
int n,x,y,cnt=0;
	cin >> n;
	rep(cnt,n){
//		getline(cin,ww);
//		if(ww != "") break;
//		cin.ignore();
		
		rep(i,8) cin >> bd[i];
		cin >> x >> y;

		x--; y--;
		baku(y,x);
		printf("Data %d:\n",cnt+1);
		rep(i,8) cout << bd[i] << endl;
	}
	return 0;
	
}