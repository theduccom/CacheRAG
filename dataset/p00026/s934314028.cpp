#include<iostream>
using namespace std;

int main(void){

  int map[10][10] = {{0,0}};

  int x,y,s,white = 0,maxi = 0;
  char c1,c2;

  while(cin >> x >> c1 >> y >> c2 >> s){

    if(s == 1){
      map[x][y]++;
      (x+1 <= 9) ? map[x+1][y]++ : map[x+1][y]+=0;
      (y+1 <= 9) ? map[x][y+1]++ : map[x][y+1]+=0;
      (x-1 >= 0) ? map[x-1][y]++ : map[x-1][y]+=0;
      (y-1 >= 0) ? map[x][y-1]++ : map[x][y-1]+=0;
    }

    if(s == 2){
      map[x][y]++;
      (x+1 <= 9) ? map[x+1][y]++ : map[x+1][y]+=0;
      (y+1 <= 9) ? map[x][y+1]++ : map[x][y+1]+=0;
      (x-1 >= 0) ? map[x-1][y]++ : map[x-1][y]+=0;
      (y-1 >= 0) ? map[x][y-1]++ : map[x][y-1]+=0;
      (x+1 <= 9 && y+1 <= 9) ? map[x+1][y+1]++ : map[x+1][y+1]+=0;
      (x-1 >= 0 && y+1 <= 9) ? map[x-1][y+1]++ : map[x-1][y+1]+=0;
      (x+1 <= 9 && y-1 >= 0) ? map[x+1][y-1]++ : map[x+1][y-1]+=0;
      (x-1 >= 0 && y-1 >= 0) ? map[x-1][y-1]++ : map[x-1][y-1]+=0;

    }

    if(s == 3){
      map[x][y]++;
      (x+1 <= 9) ? map[x+1][y]++ : map[x+1][y]+=0;
      (y+1 <= 9) ? map[x][y+1]++ : map[x][y+1]+=0;
      (x-1 >= 0) ? map[x-1][y]++ : map[x-1][y]+=0;
      (y-1 >= 0) ? map[x][y-1]++ : map[x][y-1]+=0;
      (x+1 <= 9 && y+1 <= 9) ? map[x+1][y+1]++ : map[x+1][y+1]+=0;
      (x-1 >= 0 && y+1 <= 9) ? map[x-1][y+1]++ : map[x-1][y+1]+=0;
      (x+1 <= 9 && y-1 >= 0) ? map[x+1][y-1]++ : map[x+1][y-1]+=0;
      (x-1 >= 0 && y-1 >= 0) ? map[x-1][y-1]++ : map[x-1][y-1]+=0;
      (x+2 <= 9) ? map[x+2][y]++ : map[x+2][y]+=0;
      (y+2 <= 9) ? map[x][y+2]++ : map[x][y+2]+=0;
      (x-2 >= 0) ? map[x-2][y]++ : map[x-2][y]+=0;
      (y-2 >= 0) ? map[x][y-2]++ : map[x][y-2]+=0;
    }    
  }
  maxi = map[0][0];
  for(int i = 0;i < 10;i++){
    for(int j = 0;j < 10;j++){
      if(map[i][j] == 0){
        white++;
      }
      if(maxi < map[i][j]){
        maxi = map[i][j];
      }
    }
  }
  cout << white << endl << maxi << endl;
  return 0;
}