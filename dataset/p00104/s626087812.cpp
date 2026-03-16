#include<iostream>
#include<string>
using namespace std;

int main(){
  while(true){
    int H,W;
    cin>>H>>W;
    if(W==0&&H==0)break;
    string tiles[H][W];
    bool same_tiles[H][W];
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
        same_tiles[i][j]=false;
      }
    }
    string tiles_line;
    for(int i=0;i<H;i++){
      cin>>tiles_line;
      for(int j=0;j<W;j++){
        tiles[i][j]=tiles_line[j];
      }
    }
    int now_x=0,now_y=0;
    while(true){
      if(same_tiles[now_y][now_x]==true){
        cout<<"LOOP"<<endl;
        break;
      }
      same_tiles[now_y][now_x]=true;
      if(tiles[now_y][now_x]==">")now_x++;
      else if(tiles[now_y][now_x]=="<")now_x--;
      else if(tiles[now_y][now_x]=="v")now_y++;
      else if(tiles[now_y][now_x]=="^")now_y--;
      else if(tiles[now_y][now_x]=="."){
        cout<<now_x<<' '<<now_y<<endl;
        break;
      }
    }
  }
}