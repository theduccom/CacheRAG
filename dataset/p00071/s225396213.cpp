#include<iostream>
#include<cstdio>
using namespace std;
int field[14][14];
void bomb(int x, int y);
int main(){
  int n,x,y;
  cin >>n;
  for(int c=1; c<=n; c++){
    for(int i=0; i<8; i++) for(int j=0; j<8; j++) scanf("%1d",&field[j+3][i+3]);
    cin >>x>>y;
    bomb(x+2,y+2);
    cout <<"Data "<<c<<":"<<endl;
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
	cout <<field[j+3][i+3];
      }
      cout <<endl;
    }
  }
  return 0;
}
void bomb(int x, int y){
  field[x][y] = 0;
  if(field[x+1][y] == 1) bomb(x+1,y);
  if(field[x+2][y] == 1) bomb(x+2,y);
  if(field[x+3][y] == 1) bomb(x+3,y);
  if(field[x-1][y] == 1) bomb(x-1,y);
  if(field[x-2][y] == 1) bomb(x-2,y);
  if(field[x-3][y] == 1) bomb(x-3,y);
  if(field[x][y+1] == 1) bomb(x,y+1);
  if(field[x][y+2] == 1) bomb(x,y+2);
  if(field[x][y+3] == 1) bomb(x,y+3);
  if(field[x][y-1] == 1) bomb(x,y-1);
  if(field[x][y-2] == 1) bomb(x,y-2);
  if(field[x][y-3] == 1) bomb(x,y-3);
}