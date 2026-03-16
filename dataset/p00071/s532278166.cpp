#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
using namespace std;
char f[9][9];
void tansaku(int x,int y){
	if(x<1||x>9||y<1||y>9||f[y][x]=='0')
		return ;
	if(f[y][x]=='1'){
		f[y][x]='0';
		tansaku(x-1,y);
		tansaku(x-2,y);
		tansaku(x-3,y);
		tansaku(x+1,y);
		tansaku(x+2,y);
		tansaku(x+3,y);
		tansaku(x,y+1);
		tansaku(x,y+2);
		tansaku(x,y+3);
		tansaku(x,y-1);
		tansaku(x,y-2);
		tansaku(x,y-3);
	}
}
int main(){
	
	int n;
	cin>>n;
	int k=1;

	
	while(n>0){
		int x,y;
		for(int i=1;i<9;i++){
			for(int j=1;j<9;j++){
				cin>>f[i][j];
			}
		}
		cin>>x>>y;
		tansaku(x,y);
		cout<<"Data "<<k++<<":"<<endl;
		for(int i=1;i<9;i++){
			for(int j=1;j<9;j++){
				cout<<f[i][j];
			}
			cout<<endl;
		}
		n--;
	}
	
	
	
}