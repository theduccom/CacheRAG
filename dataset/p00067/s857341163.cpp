#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
string map[12];

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

void dfs(int x,int y){
  if(!(0<=x&&x<12&&0<=y&&y<12)){
    return;
  }else if(map[y][x]=='0'){
    return;
  }else{
    map[y][x]='0';
  }
  for(int i=0;i<4;i++){
    dfs(x+dx[i],y+dy[i]);
  }
}

int main(){
  
  while(1){
    int count = 0;
    for(int i=0;i<12;i++){
      cin >> map[i];
    }
    if(getchar()==EOF){
      break;
    }
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
        if(map[j][i]=='1'){
          dfs(i,j);
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}
  