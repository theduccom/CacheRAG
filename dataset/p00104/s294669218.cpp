#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int H,W,x,y,flag;
char tile[100][101];

int main(){
	while(cin>>H>>W){
		if(H+W==0)return 0;
		for(int i=0;i<H;i++)for(int j=0;j<W;j++)cin>>tile[i][j];
		x=0;y=0;flag=0;
		for(int i=0;i<10000;i++){
			if(tile[y][x]=='.'){
				cout<<x<<" "<<y<<endl;
				flag=1;
				break;
			}
			if(tile[y][x]=='>')x++;
			if(tile[y][x]=='<')x--;
			if(tile[y][x]=='^')y--;
			if(tile[y][x]=='v')y++;
		}
		if(flag==0)cout<<"LOOP"<<endl;
	}
}