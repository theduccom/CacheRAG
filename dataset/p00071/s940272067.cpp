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
char field[20][20];

void bomb(int x,int y){
	field[x][y]='0';
	for(int i=-3;i<=3;i++){
		if(field[x+i][y]=='1'){
			field[x+i][y]='0';
			bomb(x+i,y);
		}
		if(field[x][y+i]=='1'){
			field[x][y+i]='0';
			bomb(x,y+i);
		}
	}
	return;
}

int main(void){
	int n;
	int x,y;
	scanf("%d",&n);
	for(int a=1;a<=n;a++){
		memset(field,'0',sizeof(field));
		for(int i=0;i<8;i++){
			scanf("%s",field[i]);
		}
		scanf("%d",&x);
		scanf("%d",&y);
		bomb(y-1,x-1);
		printf("Data %d:\n",a);
		for(int i=0;i<8;i++){
			printf("%s\n",field[i]);
		}
	}
	return 0;
}