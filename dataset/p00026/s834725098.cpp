#include<iostream>
#include<stdio.h>
using namespace std;

int paper[10][10]={0};

void small_ink(int x,int y){
  paper[y][x]++;
  if(x+1<10)paper[y][x+1]++;
  if(x-1>=0)paper[y][x-1]++;
  if(y+1<10)paper[y+1][x]++;
  if(y-1>=0)paper[y-1][x]++;
}
void midium_ink(int x,int y){
  for(int i=-1;i<2;i++){
    for(int j=-1;j<2;j++){
      if(y+i>=0 && y+i<10 && x+j>=0 && x+j<10)paper[y+i][x+j]++;
    }
  }
}
void big_ink(int x,int y){
  for(int i=-1;i<2;i++){
    for(int j=-1;j<2;j++){
      if(y+i>=0 && y+i<10 && x+j>=0 && x+j<10)paper[y+i][x+j]++;
    }
  }
  for(int i=-1;i<2;i=i+2){
      if(y+i*2>=0 && y+i*2<10)paper[y+i*2][x]++;
  }
  for(int i=-1;i<2;i=i+2){
      if(x+i*2>=0 && x+i*2<10)paper[y][x+i*2]++;
  }
}

int main(){
  int x,y,s;
  int white=0;
  int darkest=0;
  while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
    if(s==1)small_ink(x,y);
    else if(s==2)midium_ink(x,y);
    else if(s==3)big_ink(x,y);
  }
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(paper[i][j]==0)white++;
      if(paper[i][j]>darkest)darkest=paper[i][j];
    }
  }
  cout<<white<<endl<<darkest<<endl;
}

