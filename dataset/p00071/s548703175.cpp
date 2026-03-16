#include <iostream>
#include <queue>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int sx,sy;
char mas[8][8];
queue <pair<int,int> > que;
 
void check(int x,int y){
  mas[y][x] = '0';
  for(int i=1;i<=3;i++){
    if(mas[y+i][x] == '1' && y+i < 8){
      mas[y+i][x] = '0'; que.push(make_pair(x,y+i));
    }
    if(mas[y][x+i] == '1' && x+i < 8){
      mas[y][x+i] = '0'; que.push(make_pair(x+i,y));
    }
    if(y-i >= 0 && mas[y-i][x] == '1'){
      mas[y-i][x] = '0'; que.push(make_pair(x,y-i));
    }
    if(x-i >= 0 && mas[y][x-i] == '1'){
      mas[y][x-i] = '0'; que.push(make_pair(x-i,y));
    }
  }
}
    
int main(){
  int n; string trash;
  cin >> n;
  for(int k=0;k<n;k++){
    getline(cin,trash);
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++) cin >> mas[i][j];
    }
    cin >> sx >> sy; que.push(make_pair(--sx,--sy));
    while(!que.empty()){
      pair<int,int> p = que.front(); que.pop();
      check(p.first,p.second);
    }
    cout << "Data " << k+1 << ":\n"; 
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++) cout << mas[i][j];
      cout << endl;
    }
  }
}