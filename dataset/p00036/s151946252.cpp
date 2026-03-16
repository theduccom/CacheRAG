#include <iostream>
#include <string>
using namespace std;

int main(){
  int block[5][4];
  int sx,sy;
  int x,y;
  string line;
  while(true){
    for(int i=0;i<20;i++)block[i%5][i/5] = 0;
    sx=sy=-1;
    for(y=0;y<8;y++){
      if (!(cin>>line))break;
      for(x=0;x<8;x++){
	if (line[x]=='1'){
	  if (sy==-1){sx=x-1;sy=y;}
	  block[x-sx][y-sy] = 1;
	}
      }
    }
    if (y<8)break;
    if(block[2][0]&&block[1][1]&&block[2][1])cout<<"A"<<endl;
    if(block[1][3])cout<<"B"<<endl;
    if(block[4][0])cout<<"C"<<endl;
    if(block[0][2])cout<<"D"<<endl;
    if(block[3][1])cout<<"E"<<endl;
    if(block[2][2])cout<<"F"<<endl;
    if(block[0][1]&&block[2][0])cout<<"G"<<endl;
  }
  return 0;
}