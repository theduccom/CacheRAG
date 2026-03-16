#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
  int w, h;
  while( cin >> h >> w, w+h ) {
    char room[101][101];
    bool flag[101][101];
    int now_x = 0, now_y = 0;
 
    for(int i=0; i<h; i++) {
      for(int j=0; j<w; j++) {
    cin >> room[i][j];
    flag[i][j] = false;
      }
    }
 
    while(1) {
      if( flag[now_y][now_x] || room[now_y][now_x] == '.' ) break;
      char c = room[now_y][now_x];
      flag[now_y][now_x] = true;
      
 
      if( c == '>' ) {
    while( room[now_y][now_x] == c ) {
      now_x++;
    }
      }
      if( c == '<' ) {
    while( room[now_y][now_x] == c ) {
      now_x--;
    }
      }
      if( c == 'v' ) {
    while( room[now_y][now_x] == c ) {
      now_y++;
    }
      }
      if( c == '^' ) {
    while( room[now_y][now_x] == c ) {
      now_y--;
    }
      }
    }
 
    if( room[now_y][now_x] != '.' ) cout << "LOOP" << endl;
    else cout << now_x << " " << now_y << endl;
  }
}