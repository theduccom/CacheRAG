#include<iostream>
#include<cstring>
using namespace std;

int h,w;
char b[100][101];
bool visit[100][100];

int main(){
	while(cin>>h>>w,h|w){
		cin.ignore();
		for(int i=0;i<h;i++)cin>>b[i];
		int y=0,x=0;
		memset(visit,false,sizeof(visit));
		while(!visit[y][x]&&b[y][x]!='.'){
			visit[y][x]=true;
			if(b[y][x]=='>')x++;
			else if(b[y][x]=='<')x--;
			else if(b[y][x]=='^')y--;
			else if(b[y][x]=='v')y++;
		}
		if(visit[y][x])cout<<"LOOP"<<endl;
		else cout<<x<<' '<<y<<endl;
	}
	return 0;
}