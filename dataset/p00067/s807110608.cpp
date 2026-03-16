#include<iostream>
#include<string>
#include<queue>
using namespace std;



int main(){
  int field[14][14];
  int xx[4]={1,0,-1,0};
  int yy[4]={0,1,0,-1};
  queue<int> search;
  string line;
  int x,y;
  while(true){
    for(y=0;y<14;y++){
      for(x=0;x<14;x++){
	field[x][y] = 0;
      }
    }
    for(y=0;y<12;y++){
      if (!(cin>>line))break;
      for(x=0;x<12;x++){
	if (line[x]=='1')
	  field[x+1][y+1] = 1;
      }
    }
    if(y<12)break;
    int count = 0;
    for(int y=1;y<13;y++){
      for(int x=1;x<13;x++){
	if (field[x][y]==1){
	  count++;
	  field[x][y]=0;
	  search.push(y*14+x);
	  while(!(search.empty())){
	    for(int i=0;i<4;i++){
	      if(field[search.front()%14+xx[i]][search.front()/14+yy[i]]){
		field[search.front()%14+xx[i]][search.front()/14+yy[i]]=0;
		search.push(search.front()+yy[i]*14+xx[i]);
	      }
	    }
	    search.pop();
	  }
	}
      }
    }
    cout<<count<<endl;
  }
  return 0;
}