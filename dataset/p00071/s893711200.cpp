#include <iostream>
using namespace std;
int dx[] = {0,0,0,3,2,1,0,0,0,-1,-2,-3},dy[] = {3,2,1,0,0,0,-1,-2,-3,0,0,0};

void chain(int sx,int sy,int bom[][8]){
  bom[sx][sy] = 0;
  int x,y; 
  for(int i = 0 ; i < 12 ; i++){
    x = dx[i] + sx;
    y = dy[i] + sy;
    if(bom[x][y] == 1 && (0 <= x && x < 8) && (0 <= y && y < 8 )){
      chain(x,y,bom);
    }
  }

}

int main(){
  string bo;
  int bom[8][8];
  int n,k;
  cin >> n;
  for(k = 1 ; k <= n ; k++ ){
    for(int i = 0 ; i < 8; i++){
      cin >> bo;
       for(int j = 0; j < 8 ; j++){
	bom[i][j] = bo[j] - '0';
      }
    }
 
    int sx,sy;
    cin >> sy >> sx;
    sx--;sy--;
    chain(sx,sy,bom);
    cout << "Data " << k << ":" << endl;
    for(int i = 0; i < 8 ; i++){
      for(int j = 0; j < 8 ; j++){
	cout << bom[i][j];
      }
      cout << endl;
    }
  }
}
//http://www9.plala.or.jp/sgwr-t/c/sec11-2.html
//二次元配列を関数へ渡す場合