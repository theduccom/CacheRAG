#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char m[111][111];
bool used[111][111];
char c[] = "v^<>";
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int main(void){
  while(1){
    int w,h;
    cin >> w >> h;
    if(!w && !h)break; 
    memset(m,0,sizeof(m));
    memset(used,false,sizeof(used));
    for(int i = 0; i < w; i++){
      cin >> m[i];
    }
    int x = 0,y = 0;
    bool f = true;
    while(m[x][y] != '.'){
      used[x][y] = true;
      for(int i = 0;i < 4; i++){
	if(m[x][y] == c[i]){
	  x += dx[i];
	  y += dy[i];
	  break;
	}
      }
      if(used[x][y]){
	cout << "LOOP" << endl;
	f = false;
	break;
      }
    }
    if(f){
      cout << y << " " << x << endl;
    }
  }
}