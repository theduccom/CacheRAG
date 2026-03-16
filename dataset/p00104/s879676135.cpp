#include<iostream>
#include<cstdio>

using namespace std;

int main(){
  int w,h;
  char cmap[200][200];
  bool used[200][200];

  while(true){
    cin >> w >> h;
    if(w+h == 0)break;
    for(int i=0;i<200;i++)for(int j=0;j<200;j++)used[i][j]=false;

    for(int i=0;i<w;i++){
      for(int j=0;j<h;j++){
	cin >> cmap[i][j];
	used[i][j]=false;
      }
    }

    int x,y;
    x=y=0;
    bool fin=false;

    while(!used[y][x] && cmap[y][x] != '.'){
      used[y][x] = true;
      if(cmap[y][x] == '>' && x+1 <h){
	x++;
      }
      else if(cmap[y][x] == 'v' && y+1 < w){
	y++;
      }
      else if(cmap[y][x] == '^' && y-1 >= 0){
	y--;
      }
      else if(cmap[y][x] == '<' && x-1 >= 0){
	x--;
      }

      if(used[y][x]){
	cout << "LOOP" << endl;
 	fin = true;
      }
    }
    if(!fin){
      cout << x << " " << y << endl;
    }






  }

  return 0;
}