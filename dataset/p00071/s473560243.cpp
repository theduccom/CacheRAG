#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>P;

queue<P> que;
int dy[4]={-1,0,1,0};
int dx[4]={0,-1,0,1};


int main(){
  int n;
  cin>>n;
  for(int k=1;k<=n;k++){
    int x,y;
    char maps[9][9];
    for(int i=0;i<8;i++){
      cin>>maps[i];
    }
    cin>>x>>y;
    x--;y--;
    maps[y][x]='0';
    que.push(P(y,x));
    while(!que.empty()){
      P p=que.front();que.pop();
      for(int i=1;i<=3;i++){
	for(int j=0;j<4;j++){
	  int ny=p.first+dy[j]*i;
	  int nx=p.second+dx[j]*i;
	  if(maps[ny][nx]=='1' && ny>=0 && ny<8 && nx>=0 && nx<8){
	    maps[ny][nx]='0';
	    que.push(P(ny,nx));
	  }
	}
      }
    }
    cout<<"Data "<<k<<':'<<endl;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
	cout<<maps[i][j];
      }
      cout<<endl;
    }
  }
  return 0;
}
    