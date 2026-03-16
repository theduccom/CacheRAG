#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>
#include<utility>
#include<string>

using namespace std;
void ex(int x,int y,int con,int ang);

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
char m[10][10]={0};
main(){
  int i,j,l;
  int n,x,y;
  cin >> n;
  for(l=1;l<=n;l++){
    for(i=1;i<=8;i++){
      for(j=1;j<=8;j++){
	scanf(" %c",&m[j][i]);
      }
    }

    cin >> x >> y;
    ex(x,y,0,0);
    cout <<"Data "<<l<<':'<<endl;
    for(i=1;i<=8;i++){
      for(j=1;j<=8;j++){
	cout << m[j][i];
      }
      puts("");
    }
  }
}

void ex(int x,int y,int con,int ang){
  int i;
  if(m[x][y]=='1'){
    m[x][y]='0';
    for(i=0;i<4;i++){
      if(0 < x+dx[i] && x+dx[i] < 9 && 0 < y+dy[i] && y+dy[i] <9){
	ex(x+dx[i],y+dy[i],3,i);
      }
    }
  }
  else if(con!=1){
    if(0 < x+dx[ang] && x+dx[ang] < 9 && 0 < y+dy[ang] && y+dy[ang] <9){
      ex(x+dx[ang],y+dy[ang],con-1,ang);
    }
  }
}