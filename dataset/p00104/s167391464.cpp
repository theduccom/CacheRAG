#include<iostream>

using namespace std;

typedef struct{
  int x;
  int y;
}Point;

int main(){

  int x,y;

  while(cin >> y >> x && x+y){
    char data[y][x];
    int come[y][x];
    for(int i = 0; i < y; i++){
      for(int j = 0; j < x; j++){
	cin >> data[i][j];
	come[i][j] = 0;
      }
    }

    Point point;
    point.x = point.y = 0;
    int status = 0;
    while(1){
      come[point.y][point.x] = 1;
      if(data[point.y][point.x] == '^') point.y--;
      else if(data[point.y][point.x] == 'v') point.y++;
      else if(data[point.y][point.x] == '>') point.x++;
      else if(data[point.y][point.x] == '<') point.x--;
      else if(data[point.y][point.x] == '.') break;
      if(come[point.y][point.x]){
	status = 1;
	break;
      }
    }
    if(status) cout << "LOOP" << endl;
    else cout << point.x << " " << point.y << endl;
  }

  return 0;
}