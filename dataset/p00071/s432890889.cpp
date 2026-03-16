#include <iostream>
#include <string>
using namespace std;

int sx,sy;
char mas[8][8];
int d[] = {-3,-2,-1,1,2,3};

void rec(int x,int y){
  mas[y][x] = '0';
  for(int i=0;i<6;i++){
    int nx = x + d[i];
    int ny = y + d[i];
    if(mas[y][nx] == '1' && nx >= 0 && nx < 8) rec(nx,y);
    if(mas[ny][x] == '1' && ny >= 0 && ny < 8) rec(x,ny);
  }
}

int main(){
  int n; cin >> n;
  for(int k=1;k<=n;k++){
    string tr; getline(cin,tr);
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++) cin >> mas[i][j];
    }
    cin >> sx >> sy;
    rec(--sx,--sy);
    cout << "Data " << k << ":\n"; 
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++) cout << mas[i][j];
      cout << endl;
    }
  }
}