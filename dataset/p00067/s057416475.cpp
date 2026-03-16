#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int field[13][13];
int ans=0;

void dfs(int y,int x){
  field[y][x]=0;
  int dx[4]={-1,0,1,0};
  int dy[4]={0,-1,0,1};

  for(int i=0;i<4;i++){
      int nx=x+dx[i],ny=y+dy[i];
      if(0<=nx && nx<12 && 0<=ny && ny<12 && field[ny][nx] == 1)dfs(ny,nx);
    
  }
  
}

int iscan(){

  for(int i=0;i<=12;i++){
    for(int j=0;j<=12;j++){
      if(field[j][i] == 1){dfs(j,i);
	ans++;
      }
      
  }
    
  }
  return ans;
}

int main(){
  string s;

  while(1){
    ans=0; 
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++)field[j][i]=0;
  }


  for(int i=0;i<12;i++){
      cin >> s;
      for(int j=0;j<12;j++){

	  field[j][i]=s[j]-'0';
	

      }

  }
  if(cin.eof())break; 

  cout <<   iscan() << endl;
}
  

}