#include<iostream>
#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int,int> P;

int main()
{
  int n,x,y;
  char mp[9][9];
  int dx[4] = {-1,1,0,0};
  int dy[4] = {0,0,-1,1};
  
  cin >> n;

  for(int i = 0;i < n;i++){
    
    queue<P> que;

    for(int j = 0;j < 8;j++){
      cin >> mp[j];
    }
    //cin >> x >> y;
    scanf("%d %d",&x,&y);
    //for(int j = 0;j < 8;j++)

    que.push(P(x-1,y-1));
    while(!que.empty()){
      P now = que.front();que.pop();
      mp[now.second][now.first] = '0';
      for(int j = 0;j < 4;j++){
	for(int k = 1;k <= 3;k++){
	  int ny = now.second + dy[j] * k;
	  int nx = now.first + dx[j] * k;
	  if(0 <= nx && nx < 8 && 0 <= ny && ny < 8){
	    if(mp[ny][nx] == '1'){
	      que.push(P(nx, ny));
	      //mp[ny][nx] = '0';
	    }	  
	  }
	}
      }
    }
    cout << "Data " << i+1 << ":" << endl;
    for(int j = 0;j < 8;j++){
      cout << mp[j] << endl;
    }
  }
}