#include<iostream>
#include<string>

using namespace std;

string a[102];
int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};
int X, Y, gx, gy;

int dfs(int y, int x){
  int i;
  if(y < 0 || Y <= y || x < 0 || X <= x || a[y][x] == '.') { gx = x; gy = y; return 0;}
  if(a[y][x] == '#') return 1;
  if(a[y][x] == '^')      i = 0;
  else if(a[y][x] == '>') i = 1;
  else if(a[y][x] == 'v') i = 2;
  else                    i = 3;
  a[y][x] = '#';
  dfs(y + dy[i], x + dx[i]);
}

int main(){
  while(cin >> Y >> X, X != 0 || Y != 0) {
    for(int i = 0; i < Y ; i++)
      cin >> a[i];
    if(dfs(0, 0) == 1)cout << "LOOP" << endl;
    else  cout << gx << ' ' << gy << endl;
  }
}