
#include <iostream>
using namespace std;

char field[101][101];
bool check[101][101];

void tile(int x,int y) {
  if(check[y][x]) {
    check[y][x] = false;
  }
  else {
    cout << "LOOP" << endl;
    return;
  }

  if(field[y][x] == '>') {
    tile(x+1,y);
  }
  else if(field[y][x] == '<') {
    tile(x-1,y);
  }
  else if(field[y][x] == '^') {
    tile(x,y-1);
  }
  else if(field[y][x] == 'v') {
    tile(x,y+1);
  }
  else if(field[y][x] == '.') {
    cout << x << " " << y << endl;
    return;
  }
}

int main() {
  int W,H;
  string str;
  while(cin >> W >> H) {
    if(W==0 && H==0) break;
    getline(cin,str);//kill \n
    for(int i=0;i<W;i++) {
      getline(cin,str);
      for(int j=0;j<H;j++) {
        field[i][j] = *str.substr(j,1).c_str();
        check[i][j] = true;
      }
    }
    tile(0,0);
  }
}