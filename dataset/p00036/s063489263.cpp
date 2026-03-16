#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define PB push_back
#define MP make_pair
bool pos(int x,int y){
  return 0<=x&&x<8&&0<=y&&y<8;
}
int main(){
  string in;
  int fld[8][8];
  while(cin>>in){
    for(int i=0;i<8;i++)fld[i][0]=in[i]-'0';
    for(int i=1;i<8;i++){
      cin>>in;
      for(int j=0;j<8;j++){
        fld[j][i]=in[j]-'0';
      }
    }
    char ans='.';
    for(int x=0;x<8;x++){
      if(ans!='.')break;
      for(int y=0;y<8;y++){
        if(ans!='.')break;
        if(fld[x][y]){
          if(fld[x+1][y]&&pos(x+1,y)){
            if(fld[x][y+1]&&pos(x,y+1)){
              if(fld[x+1][y+1]&&pos(x+1,y+1))ans='A';
              else if(fld[x-1][y+1]&&pos(x-1,y+1))ans='G';
            }
            if(fld[x+2][y]&&fld[x+3][y]&&pos(x+2,y)&&pos(x+3,y))ans='C';
            if(fld[x+1][y+1]&&fld[x+2][y+1]&&pos(x+1,y+1)&&pos(x+2,y+1))ans='E';
          }else if(fld[x][y+1]&&pos(x,y+1)){
            if(fld[x][y+2]&&pos(x,y+2)&&fld[x][y+3]&&pos(x,y+3))ans='B';
            if(fld[x-1][y+1]&&pos(x-1,y+2)&&fld[x-1][y+2]&&pos(x-1,y+2))ans='D';
            if(fld[x+1][y+1]&&pos(x+1,y+1)&&fld[x+1][y+2]&&pos(x+1,y+2)) ans='F';
          }
        }
      }
    }
    cout<<ans<<endl;
  }
}