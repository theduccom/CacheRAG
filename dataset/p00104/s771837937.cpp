#include <iostream>
using namespace std;

int h,w;
char t[200][200];

int main(){
  while(cin>>h>>w,h||w){
    for(int i=0;i<h;i++){
      cin>>t[i];
    }

    int x=0,y=0;
    bool loopFlg = false;

    while(1){
      int nx = x;
      int ny = y;
      if(t[y][x] == '>') nx++;
      else if(t[y][x] == '<') nx--;
      else if(t[y][x] == '^') ny--;
      else if(t[y][x] == 'v') ny++;
      else if(t[y][x] == '?'){
        loopFlg = true;
        break;
      }
      else{
        break;
      }
      t[y][x] = '?';
      x = nx;
      y = ny;
    }

    if(loopFlg){
      cout<<"LOOP\n";
    }
    else{
      cout<<x<<" "<<y<<endl;
    }
  }
}