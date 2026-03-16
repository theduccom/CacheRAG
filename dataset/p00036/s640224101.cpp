//33
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  for(;;){
    char g[8][8];
    for(int y=0;y<8;y++){
      for(int x=0;x<8;x++){
	if(!(cin>>g[y][x]))return 0;
      }
    }
    for(int y=0;y<8;y++){
      for(int x=0;x<8;x++){
	if(g[y][x]=='1'){
	  int a=0;
	  for(int i=0;i<4;i++){
	    for(int j=0;j<4;j++){
	      a=(a<<1)+(y+i<8&&x+j<8&&g[y+i][x+j]=='1');
	    }
	  }
	  static const int f[]={0xcc00,0x8888,0xf000,0x8800,0xc600,0x8c40,0xc800};
	  cout<<char(find(f,f+7,a)-f+'A')<<endl;
	  goto next;
	}
      }
    }
  next:
    ;
  }
  return 0;
}