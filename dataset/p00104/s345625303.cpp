#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime> 

using namespace std;

char tile[101][101];

void loop(int x,int y){
	if(tile[x][y]=='.'){
		cout << y << ' ' << x << endl;
		return;
	}
	if(tile[x][y]=='#'){
		cout << "LOOP" << endl;
		return;
	}
	if(tile[x][y]=='>'){
		tile[x][y]='#';
		loop(x,y+1);
	}
	if(tile[x][y]=='<'){
		tile[x][y]='#';
		loop(x,y-1);
	}
	if(tile[x][y]=='^'){
		tile[x][y]='#';
		loop(x-1,y);
	}
	if(tile[x][y]=='v'){
		tile[x][y]='#';
		loop(x+1,y);

	}
}

int main(void){
	int h,w;
	int x,y;
	int a;
	while(1){
		x=0,y=0;
		cin >> h >> w;
		if(h==0 && w==0)break;
		for(a=0;a<h;a++){
			cin >> tile[a];
		}
		loop(0,0);
	}
	return 0;
}