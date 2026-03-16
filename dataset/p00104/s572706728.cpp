#include <iostream>
#include <string>
using namespace std;
void put(int,int);
int h,w;
int x,y;
int flag=0;
char tile[1111][1111];
int main(){
  while(1){
    cin >> h >> w;
    if(h==0 && w==0)break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> tile[i][j];
      }
    }
    put(0,0);
    if(flag==1){
      cout << y << ' ' << x << endl;
    }
    if(flag==2){
      cout << "LOOP" << endl;
    }
  }
}

void put(int a,int b){
  
  if(tile[a][b]=='.'){
    x=a;
    y=b;
    flag=1;
    return;
  }
  if(tile[a][b]==-1){
    flag=2;
    return;
  }
  if(tile[a][b]=='>'){
    tile[a][b]=-1;
    put(a,b+1);
  }
  if(tile[a][b]=='<'){
    tile[a][b]=-1;
    put(a,b-1);
  }
  if(tile[a][b]=='^'){
    tile[a][b]=-1;
    put(a-1,b);
  }
  if(tile[a][b]=='v'){
    tile[a][b]=-1;
    put(a+1,b);
  }
  return;
}