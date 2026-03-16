#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
char fie[13][13];
int ff[13][13];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void check(int x,int y){
  ff[x][y]=1;
  for(int i=0;i<4;i++){
    int nx = x+dx[i];
    int ny = y+dy[i];
    if(nx < 0 || nx > 11 || ny < 0 || ny > 11) continue;
    if(ff[nx][ny]==1) continue;
    if(fie[nx][ny]=='0') continue;
    check(nx,ny);
  }
}
main(){
  string s;
  while(cin >> s){
    for(int i=0;i<s.size();i++) fie[i][0]=s[i];
    for(int i=1;i<12;i++)
      for(int j=0;j<12;j++) cin >> fie[j][i];

   
    memset(ff,0,sizeof(ff));

    int res=0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	//	printf("%c",fie[j][i]);
	if(ff[j][i]==0 && fie[j][i]=='1'){
	  res++;
	  check(j,i);
	}
      }
      //   puts("");
    }
    
    cout << res << endl;
    
  }
}