#include<iostream>
using namespace std;

int main(){
  int w,h;
  char map[100][100];
  int x,y;

  while(1){
    cin >> h >> w;
    if(!h && !w)break;

    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> map[i][j];
      }
    }

    x = 0;
    y = 0;
    int count = 0;
    int flag = 0;
    while(1){
      count++;
      if(map[y][x] == '^')y--;
      if(map[y][x] == '>')x++;
      if(map[y][x] == 'v')y++;
      if(map[y][x] == '<')x--;
      if(map[y][x] == '.')break;
      if(count>h*w){
	flag = 1;
	break;
      }
    }
    if(flag)cout << "LOOP" << endl;
    else cout << x << " " << y << endl;
  }
}