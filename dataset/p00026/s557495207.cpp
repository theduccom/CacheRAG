#include<iostream>
#include<cstdio>

int paper[10][10]={};

void drop(int x,int y){
  if(x>=0&&y>=0&&x<=9&&y<=9){
    ++paper[x][y];
  }
}

void ink(int x,int y, int s){
  switch(s){
    case 3: drop(x+2,y);
            drop(x-2,y);
            drop(x,y+2);
            drop(x,y-2);
    case 2: drop(x+1,y+1);
            drop(x-1,y+1);
            drop(x-1,y-1);
            drop(x+1,y-1);
    case 1: drop(x,y);
            drop(x+1,y);
            drop(x-1,y);
            drop(x,y+1);
            drop(x,y-1);
  }

}

int main(){
  int x,y,s;

  //drop(9,9);

  /*for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      std::cout << paper[i][j] << std::endl;
    }
  }*/

  while(std::scanf(" %d,%d,%d",&x,&y,&s)+1){
    //std::cout << x << y << s;
    ink(x,y,s);
  }

  int spase=0,max=0;

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(paper[i][j]==0){
        ++spase;
      }
      if(paper[i][j]>max){
        max = paper[i][j];
      }
    }
  }

  std::cout << spase << std::endl;
  std::cout << max << std::endl;


}