#include <iostream>

using namespace std;

int w, h;
int xg, yg, xs, ys;
int data[102][102];
int dx[]={1, 0, -1, 0};
int dy[]={0, -1, 0, 1};
bool dfs(int, int, int);

main(){
  int c, d, x, y;
  while(1){
    cin >> w >> h;
    if(w==0 && h==0) break;
    int n;
    cin >> xs >> ys >> xg >> yg >> n;
    for(int i=0;i<h+2;i++){
      for(int j=0;j<w+2;j++){
	data[i][j]=0;
      }
    }
    for(int i=0;i<n;i++){
      cin >> c >> d >> x >> y;
      int tw, th;
      if(d==0){
	tw=4;
	th=2;
      }else{
	tw=2;
	th=4;
      }
      for(int i=0;i<=th-1;i++){
	for(int j=0;j<=tw-1;j++){
	  data[y+i][x+j]=c;
	}
      }
    }
    if(dfs(ys, xs, data[ys][xs])) cout << "OK" << endl;
    else cout << "NG" << endl;
  }
  return 0;
}

bool dfs(int y, int x, int c){
  if(c==0 || data[y][x]!=c) return false;
  if(y==yg && x==xg) return true;
  data[y][x]=0;
  for(int i=0;i<4;i++){
    if(dfs(y+dy[i], x+dx[i], c)) return true;
  }
  return false;
}