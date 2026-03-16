#include <iostream>

using namespace std;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
char fie[8][9];

void bomb(int x, int y){
  if(fie[y][x] == '1'){
    fie[y][x] = '0';
    for(int i=1; i<=3; i++){
      for(int j=0; j<4; j++){
	int bx = x+i*dx[j];
	int by = y+i*dy[j];
	if(0 <= bx && bx <= 7 && 0 <= by && by <= 7)
	  bomb(bx, by);
      }
    }
  }
}

int main(){
  int n;
  cin >> n;
  for(int a=0; a<n; a++){
    for(int i=0; i<8; i++)
      cin >> fie[i];
    int sx, sy;
    cin >> sx >> sy;
    bomb(sx-1 , sy-1);
    cout << "Data " << a+1 << ":" << endl;
    for(int i=0; i<8; i++){
      cout << fie[i] << endl;
    }
  }
  return 0;
}