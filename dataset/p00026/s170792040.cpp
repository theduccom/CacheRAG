#include <iostream>
#include <set>
using namespace std;

int main(){
  int smallx[5] = {0,1,0,-1,0};
  int smally[5] = {0,0,1,0,-1};
  int middlex[9] = {0,0,0,-1,-1,-1,1,1,1};
  int middley[9] = {0,-1,1,0,-1,1,0,-1,1};
  int largex[13] = {0,2,1,1,1,0,0,0,0,-1,-1,-1,-2};
  int largey[13] = {0,0,1,0,-1,2,1,-1,-2,1,0,-1,0};
  char cc;
  int a,b,c,x,y;
  int max = 0;
  int plot[10][10];
  for(int y=0;y<10;y++){
    for(int x=0;x<10;x++){
      plot[x][y] = 0;
    }
  }
  int paint = 0;
  while(cin>>a>>cc>>b>>cc>>c){
    if (c==1){
      for(int i=0;i<5;i++){
	x = a+smallx[i];
	y = b+smally[i];
	if(0<=x&&0<=y&&x<10&&y<10){
	  if (plot[x][y] == 0)paint++;
	  plot[x][y]++;
	  if(max<plot[x][y])max=plot[x][y];
	}
      }
    }
    if (c==2){
      for(int i=0;i<9;i++){
	x = a+middlex[i];
	y = b+middley[i];
	if(0<=x&&0<=y&&x<10&&y<10){
	  if (plot[x][y] == 0)paint++;
	  plot[x][y]++;
	  if(max<plot[x][y])max=plot[x][y];
	}
      }
    }
    if (c==3){
      for(int i=0;i<13;i++){
	x = a+largex[i];
	y = b+largey[i];
	if(0<=x&&0<=y&&x<10&&y<10){
	  if (plot[x][y] == 0)paint++;
	  plot[x][y]++;
	  if(max<plot[x][y])max=plot[x][y];
	}
      }
    }
  }
  cout<<100-paint<<endl<<max<<endl;
  return 0;
}