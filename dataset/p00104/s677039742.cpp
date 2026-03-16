#include <iostream>
#define N 100
using namespace std;

int main(){
  while(1){
    int h, w;
    bool flag;
    cin >> h >> w;
    if(h==0 && w==0) break;
    getchar();

    bool p[N][N];
    char data[N][N];

    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> data[i][j];
	p[i][j]=false;
      }
    }

    int x=0, y=0;
    flag=false;
    while(1){
      if(p[y][x]){
	flag=true;
	break;
      }
      p[y][x]=true;
      if(data[y][x]=='>'){
	x++;
      }
      else if(data[y][x]=='<'){
	x--;
      }
      else if(data[y][x]=='^'){
	y--;
      }
      else if(data[y][x]=='v'){
	y++;
      }
      else if(data[y][x]=='.'){
	break;
      }
    }
    if(flag) cout << "LOOP" << endl;
    else cout << x << ' ' << y << endl;
  }
  return 0;
}