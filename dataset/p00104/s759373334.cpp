#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
void tile(int *x,int *y,char d[101][101] ){
	if(d[*y][*x]=='m')
		*x=50000;
	else if(d[*y][*x]!='.'){
	if(d[*y][*x]=='>'){
	d[*y][*x]='m';
		*x=*x+1;
	}
	else if(d[*y][*x]=='<'){
	d[*y][*x]='m';
		*x=*x-1;
	}
	else if(d[*y][*x]=='^'){
		d[*y][*x]='m';
		*y=*y-1;
	}
	else if(d[*y][*x]=='v'){
		d[*y][*x]='m';
		*y=*y+1;
	}
		tile(x,y,d);
	}
	
}
int main(){
	
	int w,h;
	
	while(cin>>h>>w,h!=0&&w!=0){
	char d[101][101];
	int x=0,y=0;
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>d[i][j];
		}
	}
	tile(&x,&y,d);
	
	if(x==50000)
		cout<<"LOOP"<<endl;
	else
		cout<<x<<" "<<y<<endl;
	}
	
}