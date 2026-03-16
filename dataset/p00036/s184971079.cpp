#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  bool bmap[10][10],fin = false;
  char s[10];
  while(true){
    for(int i=1;i<=8;i++){
      if(scanf("%s",s) == EOF){
	fin = true;
	break;
      }
      for(int j=0;j<8;j++){
	if(s[j] == '0')bmap[i][j+1] = false;
	else bmap[i][j+1] = true;
      }
    }
    if(fin)break;
    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
	if(bmap[i][j]){
	  if(j+1<= 8 && i+1<=8 &&bmap[i][j+1] && bmap[i+1][j] && bmap[i+1][j+1]){
	    cout << "A" << endl; break;
	  }
	  else if(i+3<=8 && bmap[i+1][j] && bmap[i+2][j] && bmap[i+3][j]){
	    cout << "B" << endl; break;
	  }
	  else if(j+3<=8 && bmap[i][j+1] && bmap[i][j+2] && bmap[i][j+3]){
	    cout << "C" << endl; break;
	  }
	  else if(i+2<=8 && 1<=j-1 && bmap[i+1][j] && bmap[i+1][j-1] && bmap[i+2][j-1]){
	    cout << "D" << endl; break;
	  }
	  else if(i+1<=8 && j+2<=8 && bmap[i][j+1] && bmap[i+1][j+1] && bmap[i+1][j+2]){
	    cout << "E" << endl; break;
	  }
	  else if(i+2<=8 && j+1<=8 && bmap[i+1][j] && bmap[i+1][j+1] && bmap[i+2][j+1]){
	    cout << "F" << endl; break;
	  }
	  else if(i+1<=8 && 1<=j-1 && j+1<=8 && bmap[i][j+1] && bmap[i+1][j] && bmap[i+1][j-1]){
	    cout << "G" << endl; break;
	  }
	}
      }
    }
  
  }
  return 0;
}