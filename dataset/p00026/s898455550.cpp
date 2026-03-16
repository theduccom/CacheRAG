#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;
void draw(int map[10][10]);
void drop(int x,int y,int z);
void drop_rotate(int,int,int,int);
bool isValidPoint(int,int);
void count(int map[10][10]);
int map[10][10];
int white, conc;
int dx,dy;

int main(){

  //  const int k=9;
  int x,y,s;
  string tmp;

  //zñÌú»
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      map[i][j]=0;
    }
  }

  while(cin >> tmp){ //J}æØèðooÉ
  //  cout << map[2][3];
    tmp.replace(tmp.find(","),1," ");
    tmp.replace(tmp.find(","),1," ");
    istringstream ss(tmp);
    ss >> x >> y >> s;
    drop(x,y,s);
    //draw(map);
  }
  count(map);
}

//2³mapÌ`Ê
void draw(int map[10][10]){
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
      printf("%4d",map[i][j]);
      }
      cout << endl;
    }
    cout << endl;
}

//¦ðÔ·Ö
void count(int map[10][10]){
  white = 0; conc = 0;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(map[i][j]==0){
	white++;
      }
      if(map[i][j] > conc){
	conc = map[i][j];
      }
    }
  }
  cout << white << endl << conc << endl;
}
 
//CNº
void drop(int x,int y,int s){
  //  int dx; int dy;
  /* while(s>0){
    //dx,dyð¢ë¢ë®©·B
    
    if(isValidPoint((x+dx),(y+dy))){
      map[x+dx][y+dy]++;
    }
    s--;
    }*/
  if(isValidPoint(x,y)){
    map[x][y]++;
  }
  if(s==3){
    drop_rotate(x,y,2,0);
    drop_rotate(x,y,1,1);
    drop_rotate(x,y,1,0);
  }else if(s==2){
    drop_rotate(x,y,1,1); 
    drop_rotate(x,y,1,0);
  }else{
    drop_rotate(x,y,1,0);
  }
}

void drop_rotate(int x, int y,int dx, int dy){
  int temp;
  for(int i = 0; i < 4; i++){
    temp = dx;
    dx = dy;
    dy = -temp;
    if(isValidPoint((x+dx),(y+dy))){
      map[x+dx][y+dy]++;
    }
  }
}

bool isValidPoint(int x,int y){
  if(x < 0 || x > 9 || y < 0 || y > 9){
    return false;
  }else{
    return true;
  }
}