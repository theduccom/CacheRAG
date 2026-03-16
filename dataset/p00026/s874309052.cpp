#include <iostream>
using namespace std;

int main()
{
  int x, y, size;
  int canvas[10][10];
  int emp, max;
  char comma;
  int i, j;

  for(i=0; i<10; i++){
    for(j=0; j<10; j++) canvas[i][j]=0;
  }
  while(cin >> x >> comma >> y >> comma >> size){
    canvas[x][y]++;
    if(x>0) canvas[x-1][y]++;
    if(x<9) canvas[x+1][y]++;
    if(y>0) canvas[x][y-1]++;
    if(y<9) canvas[x][y+1]++;
    if(size>1){
      for(i=-1; i<=1; i+=2){
        for(j=-1; j<=1; j+=2){
          if(x+i>=0 && x+i<=9 && y+j>=0 && y+j<=9) canvas[x+i][y+j]++;
        }
      }
    }
    if(size>2){
      if(x>1) canvas[x-2][y]++;
      if(x<8) canvas[x+2][y]++;
      if(y>1) canvas[x][y-2]++;
      if(y<8) canvas[x][y+2]++;
    }
  }
  emp=0; max=0;
  for(i=0; i<10; i++){
    for(j=0; j<10; j++){
      if(canvas[i][j]==0) emp++;
      if(max<canvas[i][j]) max=canvas[i][j];
    }
  }
  printf("%d\n%d\n", emp, max);

  return 0;
}