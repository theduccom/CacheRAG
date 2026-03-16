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

int n;
char field[9][9];
int sx,sy;

void bomb(int x,int y){
	field[x][y]='0';
	for(int i=1;i<=3;i++){
		if(x+i>=8)break;
		if(field[x+i][y]=='1'){
			field[x+i][y]='0';
			bomb(x+i,y);
		}
	}
	for(int i=1;i<=3;i++){
		if(x-i<0)break;
		if(field[x-i][y]=='1'){
			field[x-i][y]='0';
			bomb(x-i,y);
		}
	}
	for(int i=1;i<=3;i++){
		if(y+i>=8)break;
		if(field[x][y+i]=='1'){
			field[x][y+i]='0';
			bomb(x,y+i);
		}
	}
	for(int i=1;i<=3;i++){
		if(y-i<0)break;
		if(field[x][y-i]=='1'){
			field[x][y-i]='0';
			bomb(x,y-i);
		}
	}
}

int main(void){
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<8;j++)cin >> field[j];
		cin >> sy >> sx;
		sx--;
		sy--;
		bomb(sx,sy);
		printf("Data %d:\n",i);
		for(int j=0;j<8;j++)cout << field[j] << endl;
	}
    return 0;
}