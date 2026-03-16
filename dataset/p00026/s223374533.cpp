#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
  int x,y,size,m[14][14]={0},max=0,none=0;
  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
    if(size>=1){
      m[x+2][y+2]++;
      m[x+2][y+1]++;
      m[x+2][y+3]++;
      m[x+1][y+2]++;
      m[x+3][y+2]++;
    }
    if(size>=2){
      m[x+1][y+1]++;
      m[x+1][y+3]++;
      m[x+3][y+1]++;
      m[x+3][y+3]++;
    }
    if(size==3){
      m[x+2][y]++;
      m[x+2][y+4]++;
      m[x][y+2]++;
      m[x+4][y+2]++;
    }
  }
  for(y=0;y<10;y++){
    for(x=0;x<10;x++){
      if(m[x+2][y+2]>max)max=m[x+2][y+2];
      if(!m[x+2][y+2])none++;
    }
  }
  cout<<none<<endl<<max<<endl;
}