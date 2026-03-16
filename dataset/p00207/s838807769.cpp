#include<iostream>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
int C,goal,n,x,y,xs,ys,xg,yg,mas[110][110]={{0}};
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int d[110][110];
typedef pair<int,int>P;

int bfs();
int main(){

  while(1){
    goal=0;
    memset(mas,0,sizeof(mas));
    //memset(d,0,sizeof(d));
    C = goal = n = x = y = xs = ys = xg = yg = 0;

    cin >> x >> y;//ボードの大きさ。 ※：x=横。y=縦。
    if(x==0 && y==0){
      break;
    }
    cin >> xs >> ys;//スタート地点。
    cin >> xg >> yg;//ゴール地点。
    cin >> n;//ブロックの数。
    
    //色染め。
    int color,dire,xx,yy;
    for(int t=0;t<n;t++){
      cin >> color >> dire >> xx >> yy;

      //横長。
      if(dire==0){
	for(int i=0;i<2;i++){
	  for(int j=0;j<4;j++){
	    mas[yy+i][xx+j]=color;
	  }
	}
      }
      
      //縦長。
      else{
	for(int i=0;i<4;i++){
	  for(int j=0;j<2;j++){
	    mas[yy+i][xx+j]=color;
	  }
	}
      }
      
    }
    
    //通る色　摘出。
    C=mas[ys][xs];
    //cout << "color:" << C << endl;
    
    if(C!=0 && mas[ys][xs]==mas[yg][xg]){

      bfs();

    
      if(goal==1){
	cout << "OK" << endl;
	goal=0;
      }
      else{
	cout << "NG" << endl;
      }
    }
    else{
      cout << "NG" << endl;
    }
  }
}

int bfs(){
  queue<P>que;
  memset(d,-1,sizeof(d));
  que.push(P(ys,xs));
  d[ys][xs]=0;
  while(!que.empty()){
    P p=que.front();
    que.pop();
    if(p.first==yg && p.second==xg){
      goal=1;
      break;
    }
    for(int i=0;i<4;i++){
      int ny=p.first+dy[i];
      int nx=p.second+dx[i];
      if(ny>=1 && ny<=y && nx>=1 && nx<=x && mas[ny][nx]==C && d[ny][nx]==-1){
	d[ny][nx] = 1;
	que.push(P(ny,nx));
      }
    }
  }
  return (0);
}