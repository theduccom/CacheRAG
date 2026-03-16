#include<bits/stdc++.h>
using namespace std;

int h,w;
char maps[150][150];
int check[150][150];
int x=0,y=0;

int tansaku();

int main(){
  while(1){
  cin>>h>>w;
  if(!(h||w))break;
 
  //init
  memset(check,0,sizeof(check));

  //input
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>maps[i][j];
    }
  }
  if(tansaku())cout<<"LOOP"<<endl;
  else cout<<x<<" "<<y<<endl;
  }
}

int tansaku(){
  x=0;y=0;
  check[0][0]++;
  while(maps[y][x]!='.'){
    if(maps[y][x]=='>')x++;
    else if(maps[y][x]=='<')x--;
    else if(maps[y][x]=='v')y++;
    else if(maps[y][x]=='^')y--;
    check[y][x]++;
    if(check[y][x]>=2){
      return 1;
    }
  }
  return 0;
}