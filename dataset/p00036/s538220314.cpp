#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i, n) REP(i, 0, n)
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
#define FILL(ptr, value) FILL_((ptr), sizeof(ptr)/sizeof(value), (value))
template <typename T>
void FILL_(void * ptr, size_t size, T value){
  std::fill((T*)ptr, (T*)ptr+size, value);
}
//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};
char board1[15][15];
int board[15][15];
int x ;
int main()
{
  bool flag1 = false;
  while( 1 ){
    for(int i=0 ; i<8; i++) {
      if(scanf("%s", board1[i]) == EOF ){
	flag1 = true;
	break;
      }
    }
    for(int i = 0;i < 8;i++){
      for(int j = 0;j <8;j++){
	board[i][j] =board1[i][j]-'0';
      }
    }
    if(flag1)
      break;
    bool flag = false;
    for(int i = 0;i < 8;i++){
      for(int j = 0;j < 8;j++){
	if(board[i][j] ==1){
	  if(board[i][j+1]==1&&board[i+1][j] ==1&&board[i+1][j+1]==1){
	    cout <<"A"<<endl;
	    flag = true;
	  }else if(board[i+1][j]==1&&board[i+2][j]==1&&board[i+3][j]==1){
	    cout <<"B"<<endl;
	    flag = true;
	  }else if(board[i][j+1]==1&&board[i][j+2]==1&&board[i][j+3]==1){
	    cout <<"C"<<endl;
	    flag = true;
	  }else if(board[i+1][j-1]==1&&board[i+1][j]==1&&board[i+1][j]==1&&board[i+2][j-1]==1){
	    cout <<"D"<<endl;
	    flag = true;
	  }else if(board[i][j+1]==1&&board[i+1][j+1]==1&&board[i+1][j+2]==1){
	    cout <<"E"<<endl;
	    flag = true;
	  }else if(board[i+1][j]==1&&board[i+1][j+1]==1&&board[i+2][j+1]==1){
	    cout <<"F"<<endl;
	    flag = true;
	  }else if(board[i][j+1] ==1&&board[i+1][j-1] ==1&&board[i+1][j]==1){
	    cout <<"G"<<endl;
	    flag = true;
	  }
	}
 
      }

    }
  
  }
  return 0;
}