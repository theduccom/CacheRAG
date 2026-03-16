#include<iostream>
#include<cstdio>

using namespace std;
bool bmap[10][10];
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
void blow(int x,int y){
  bmap[y][x] = false;
  for(int i=0;i<4;i++){    
    for(int j=1;j<=3;j++){
      int nx = x+dx[i]*j,ny = y+dy[i]*j;
      if(0<=nx &&nx<8 && 0<=ny && ny<8){
	if(bmap[ny][nx]){
	  blow(nx,ny);
bmap[ny][nx] = false;
	}
      }
    }
  }

}

void display(){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      cout << bmap[i][j];
    }
    cout << endl;
  }
}


int main(){
  int T,xs,ys,NARI=1;
  cin >> T;
  string s;
  while(T-->0){
    for(int i=0;i<8;i++){
      cin >> s;
      for(int j=0;j<8;j++){
	if(s[j] == '0')bmap[i][j] = false;
	else bmap[i][j] = true;
      }
    }
    cin >> xs >> ys;
    xs-=1;ys-=1;
    blow(xs,ys);
    cout << "Data " << NARI++ << ":" << endl; 
    display();
  }
  return 0;
}