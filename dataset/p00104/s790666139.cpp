#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  while(true){
    int w,h;
    cin>>h>>w;
    if(!h&&!w)
      break;
    vector<string> room;
    for(int i=0;i<h;i++){
      string line;
      cin>>line;
      room.push_back(line);
    }
    int x,y;
    x=y=0;
    bool move = true;
    while(move){
      switch(room[y][x]){
      case'>':
	room[y][x] = '@';
	x++;
	break;
      case'<':
	room[y][x] = '@';
	x--;
	break;
      case'^':
	room[y][x] = '@';
	y--;
	break;
      case'v':
	room[y][x] = '@';
	y++;
	break;
      case'.':
	cout<<x<<" "<<y<<endl;
	move = false;
	break;
      case'@':
	cout<<"LOOP"<<endl;
	move = false;
	break;
      default:
	break;
      }
    }
  }
  return 0;
}