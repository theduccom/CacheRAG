
#include<iostream>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
int main(void){
  char maze[9][9];
  while(true){
    rep(i,8)rep(j,8)cin>>maze[i][j];
    if(cin.eof())break;
    bool used = false;
    rep(y,8){
      rep(x,8){
	if (maze[y][x] == '1') {
	  if (maze[y][x+1] == '1' && maze[y+1][x] == '1' && maze[y+1][x+1] == '1')
	    cout << "A" << endl;
	  else if (maze[y+1][x] == '1' && maze[y+2][x] == '1' && maze[y+3][x] == '1')
	    cout << "B" << endl;
	  else if (maze[y][x+1] == '1' && maze[y][x+2] == '1' && maze[y][x+3] == '1')
	    cout << "C" << endl;
	  else if (maze[y+1][x] == '1' && maze[y+1][x-1] == '1' && maze[y+2][x-1] == '1')
	    cout << "D" << endl;
	  else if (maze[y][x+1] == '1' && maze[y+1][x+1] == '1' && maze[y+1][x+2] == '1')
	    cout << "E" << endl;
	  else if (maze[y+1][x] == '1' && maze[y+1][x+1] == '1' && maze[y+2][x+1] == '1')
	    cout << "F" << endl;
	  else
	    cout << "G" << endl;
	  used = true;
	}
        if(used)break;
      }
      if(used)break;
    }
  }

  return 0;
}