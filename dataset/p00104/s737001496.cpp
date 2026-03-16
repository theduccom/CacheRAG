#include<bits/stdc++.h>
using namespace std;

string s[111];
int xx, yy;
int h, w;

int solve(int x, int y){

  if(s[y][x] == '.'){ xx = x, yy = y; return true; }
  if(x == w || y == h || x < 0 || y < 0) return false;
  if(s[y][x] == '~') return false;

  char c = s[y][x];
  s[y][x] = '~';

  int ret = false;
  if(c == '>') ret |= solve(x+1, y);
  if(c == '<') ret |= solve(x-1, y);
  if(c == 'v') ret |= solve(x, y+1);
  if(c == '^') ret |= solve(x, y-1);

  return ret;

}

int main(){

  while(cin >> h >> w, h){
    
    for(int i=0;i<h;i++) cin >> s[i];
    
    if(solve(0, 0)) cout << xx << " " << yy << endl;
    else cout << "LOOP\n";
  }
  
}