#include<iostream>
using namespace std;

int field[101][101];
int dx[] = { 0,1,0,-1};
int dy[] = { 1,0,-1,0};
int w,h;
int xs=1,ys=2,xg,yg;
int num;

int dfs(int x, int y){

  int judge = 0,nx,ny;
  
  if(x == xg && y == yg){
    return 1;
  }

  for(int i = 0;i < 4;i++){
    nx = x + dx[i];
    ny = y + dy[i];
    if(nx <= w && ny <= h && 0 < nx && 0 < ny && field[ny][nx] == num && field[ny][nx] != -1){
      field[ny][nx] = -1;
      judge += dfs(nx,ny);
    }
  }  
  
  return judge;

}
int main(){

  int n;
  int c,d,x,y;
  int j_max,k_max;
  
  while(cin >> w >> h, w | h){
    for(int i = 0;i < 101;i++){
      for(int j = 0;j < 101;j++){
	field[i][j] = 0;
      }
    }
    cin >> xs >> ys;
    cin >> xg >> yg;
    cin >> n;
    for(int i = 0;i < n;i++){
      cin >> c >> d >> x >> y;
      if(d == 0){
	j_max = 2;
	k_max = 4;
      }else{
	j_max = 4;
	k_max = 2;
      }
      for(int j = y;j < y+j_max;j++){
	for(int k = x;k < x+k_max;k++){
	  field[j][k] = c;
	}
      }
    }
    num = field[ys][xs];
    
    if(dfs( xs, ys)){
      cout << "OK" << endl;
    }else{
      cout << "NG" << endl;
    }
  }
}
    