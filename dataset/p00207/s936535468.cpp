#include<bits/stdc++.h>
using namespace std;

int xx[4] = {0, 1, 0, -1};
int yy[4] = {1, 0, -1, 0};
int block[101][101];
int already[101][101];
int w, h;
int xs, ys;
int xg, yg;
int n;
int dfs(int nowx, int nowy);

int main(){
  while(1){
    memset(block, 0, sizeof(block));
    memset(already, 0, sizeof(already));
    cin >> w >> h;
    if(w == 0 && h == 0) break;
    cin >> xs >> ys;
    cin >> xg >> yg;
    cin >> n;
    for(int i = 0; i < n; i++){
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      int high, wide;
      if(d){
	high = 4; wide = 2;
      }
      else{
	high = 2; wide = 4;
      }
      for(int j = 0; j < high; j++){
	for(int k = 0; k < wide; k++){
	  block[y+j][x+k] = c;
	}
      }
    }
    int ans = dfs(xs, ys);
    if(ans) cout << "OK" << endl;
    else cout << "NG" << endl;
  }
}

int dfs(int nowx, int nowy){
  int a = 0;
  already[nowy][nowx] = 1;
  if(nowx == xg && nowy == yg) return 1;
  for(int i = 0; i < 4; i++){
    int nextx = nowx + xx[i];
    int nexty = nowy + yy[i];
    if(0 < nextx && 0 < nexty && nextx <= w && nexty <= h && already[nexty][nextx] != 1 && block[nexty][nextx] == block[ys][xs]) a += dfs(nextx, nexty);
  }
  return a;
}