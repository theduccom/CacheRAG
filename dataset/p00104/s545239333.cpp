#include <iostream>
using namespace std;

#define MAX 100

int main(void)
{
  int H, W;
  char tile[MAX][MAX];

  while (1) {
    
    int x = 0, y = 0;

    for(int i = 0 ; i < MAX ; i++) {
      for(int j = 0 ; j < MAX ; j++) {
	tile[i][j] = '.';
      }
    }
    
    cin >> H >> W;
    if(H == 0 && W == 0) break;
    
    for(int i = 0 ; i < H ; i++) {
      for(int j = 0 ; j < W ; j++) {
	cin >> tile[i][j];
      }
    }
    
    int cal=0, sum=0;
    cal = H * W;

    //for(int i = 0 ; i < H ; i++) {
    //for(int j = 0 ; j < W ; j++) {
    while(tile[x][y] != '.') {
      if(tile[x][y] == '>') y++, sum++; 
      else if(tile[x][y] == '<') y--, sum++;
      else if(tile[x][y] == '^') x--, sum++;
      else if(tile[x][y] == 'v') x++, sum++;
      if(sum > cal) break;
      //cout << "x = " << x << endl << "y = " << y << endl;
    }
    if(sum <= cal) cout << y << ' ' << x << endl;
    else cout << "LOOP" << endl;
  }
  return 0;
}