#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX 8

using namespace std;
bool field[9][9];
int x, y;

char solve(){
  if(x+1 < MAX && y+1 < MAX && field[y][x+1] && field[y+1][x] && field[y+1][x+1]) return 'A';
  else if(y+3 < MAX && field[y+1][x] && field[y+2][x] && field[y+3][x]) return 'B';
  else if(x+3 < MAX && field[y][x+1] && field[y][x+2] && field[y][x+3]) return 'C';
  else if(x-1 >= 0 && y+2 < MAX &&field[y+1][x] && field[y+1][x-1] && field[y+2][x-1]) return 'D';
  else if(x+2 < MAX && y+1 < MAX &&field[y][x+1] && field[y+1][x+1] && field[y+1][x+2]) return 'E';
  else if(x+1 < MAX && y+2 < MAX &&field[y+1][x] && field[y+1][x+1] && field[y+2][x+1]) return 'F';
  else if(x-1 >= 0 && y+1 < MAX &&field[y][x+1] && field[y+1][x-1] && field[y+1][x]) return 'G';
}


int main(){
  string tmp[8];
  
  while(cin >> tmp[0] >> tmp[1] >> tmp[2] >> tmp[3] >> tmp[4] >> tmp[5]
	>> tmp[6] >> tmp[7]){
    bool flag = 0;
    
    for(int i = 0 ; i < 8 ; i++){
      for(int j = 0 ; j < 8 ; j++){
	field[i][j] = tmp[i][j] - '0';
      }
    }
    
    for(y = 0 ; y < 8 ; y++){
      for(x = 0 ; x < 8 ; x++){
	if(field[y][x] && !flag){
	  cout << solve();
	  flag = 1;
	}
      }
    }
    cout << endl;
  }
  return 0;
}