#include<bits/stdc++.h>
using namespace std;

int main() {

  int w, h;
  while( cin >> h >> w, w+h ) {
    char room[101][101];
    int t = 0;
    int now_x = 0, now_y = 0;

    for(int i=0; i<h; i++) {
      for(int j=0; j<w; j++) {
	cin >> room[i][j];
      }
    }

    while(1) {
      if( room[now_y][now_x] == '.' ) break;
      char c = room[now_y][now_x];
      if( c == '>' ) now_x++;
      if( c == '<' ) now_x--;
      if( c == 'v' ) now_y++;
      if( c == '^' ) now_y--;
      t++;
      if( t > w * h ) break;
    }

    if( t > w * h ) cout << "LOOP" << endl;
    else cout << now_x << " " << now_y << endl;
  }
}