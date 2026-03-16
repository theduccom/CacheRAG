#include<bits/stdc++.h>
using namespace std;

string maps[13];
int d[13][13];
int dy[4]={-1,0,1,0};
int dx[4]={0,-1,0,1};

void bfs(int y,int x);
int main(){
    while(1){
      int co=0;
      for(int i=0;i<12;i++){
        cin>>maps[i];
      }
      if(cin.eof())break;
      for(int i=0;i<12;i++){
	for(int j=0;j<12;j++){
	  if(maps[i][j]=='1'){
	    co++;
	    bfs(i,j);
	  }
	}
      }
      cout<<co<<endl;
    }
}

void bfs(int y,int x){
  maps[y][x]='0'; 
  for(int i=0;i<4;i++){
    int ny=y+dy[i];
    int nx=x+dx[i];
    if(ny>=0 && ny<12 && nx>=0 && nx<12 && maps[ny][nx]=='1'){
      bfs(ny,nx);
    }
  }
}