#include <cstdio>

int map[8][8];
int bs[8][3][2]={{{0,1},{1,0},{1,1}},
		 {{0,1},{0,2},{0,3}},
		 {{1,0},{2,0},{3,0}},
		 {{0,1},{-1,1},{-1,2}},
		 {{1,0},{1,1},{2,1}},
		 {{0,1},{1,1},{1,2}},
		 {{1,0},{0,1},{-1,1}}};

int f(int x,int y){
  if(x>=0 && x<8 && y>=0 && y<8)
    return map[x][y];
  else
    return 0;
}

int readtable(){
  for(int y=0; y<8; y++){
    for(int x=0; x<8; x++){
      char c=getchar();
      if(c==EOF) return 0;
      map[x][y]=c-'0';
    }
    getchar();
  }
  getchar();
  return 1;
}

int main(){
  while(readtable()){
    for(int y=0; y<8; y++){
      for(int x=0; x<8; x++){
	if(map[x][y]==1){
	  for(int i=0; i<7; i++){
	    if(f(x+bs[i][0][0],y+bs[i][0][1])&&f(x+bs[i][1][0],y+bs[i][1][1])&&f(x+bs[i][2][0],y+bs[i][2][1])){
	      printf("%c\n",'A'+i);
	      goto outer;
	    }
	  }
	}
      }
    }
  outer: ;
  }
}