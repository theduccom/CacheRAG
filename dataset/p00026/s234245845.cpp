#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int field[10][10];
int sx[]={-1,0,0,0,1},sy[]={0,-1,0,1,0};
int bx[]={-2,-1,-1,-1,0,0,0,0,0,1,1,1,2},by[]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
bool f(int x,int y){
	return x>=0 && x<10 && y>=0 && y<10;
}
void small(int x,int y){
	for(int i=0;i<5;i++){
		if(f(x+sx[i],y+sy[i]))field[x+sx[i]][y+sy[i]]++;
	}
}
void middle(int x,int y){
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(f(x+i,y+j))field[x+i][y+j]++;
		}
	}
}
void big(int x,int y){
	for(int i=0;i<13;i++){
		if(f(x+bx[i],y+by[i]))field[x+bx[i]][y+by[i]]++;
	}
} 
int main(){
	int x,y,size,ans=0,count=0;
	char com;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			field[i][j]=0;
		}
	}
	while(cin>>x>>com>>y>>com>>size){
		if(size==1)small(x,y);
		else if(size==2)middle(x,y);
		else big(x,y);
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(field[i][j]==0)count++;
			else ans=max(ans,field[i][j]);
		}
	}
	cout<<count<<endl<<ans<<endl;
	return 0;
}