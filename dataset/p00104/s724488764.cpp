#include <iostream>
#include <cstring>
using namespace std;

int w, h;
char map[102][102];
bool closed[102][102];
void rec(int x, int y){
  if(closed[y][x]){
    cout << "LOOP" << endl;
    return;
  }
  closed[y][x] = true;
  if(map[y][x] == '>')rec(x+1,y);
  else if(map[y][x] == 'v')rec(x, y+1);
  else if(map[y][x] == '<')rec(x-1,y);
  else if(map[y][x] == '^')rec(x,y-1);
  else {
    cout << x << " " << y << endl;
  }
}
void solve(){
  rec(0,0);
}
int main(){
  while(cin >> h >> w, w||h){
    memset(closed, 0, sizeof(closed));
    for(int i = 0; i < h; i++)cin >> map[i];
    solve();
  }
  return 0;
}