#include <cstdio>
#include <cstring>
using namespace std;
char data[8][9];
void solve(int x,int y){
  for(int i=1;i<=3;i++){
    if(x-i>=0&&data[x-i][y]=='1'){
      data[x-i][y]='0';
      solve(x-i,y);
    }
    if(y-i>=0&&data[x][y-i]=='1'){
      data[x][y-i]='0';
      solve(x,y-i);
    }
    if(x+i<8&&data[x+i][y]=='1'){
      data[x+i][y]='0';
      solve(x+i,y);
    }
    if(y+i<8&&data[x][y+i]=='1'){
      data[x][y+i]='0';
      solve(x,y+i);
    }
  }
  return;
}
int main(void){
  int n,x,y;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=0;j<8;j++){
      scanf("%s",data[j]);
    }
    scanf("%d %d",&y,&x);
    if(data[x-1][y-1]=='1'){
      data[x-1][y-1]='0';
      solve(x-1,y-1);
    }
    printf("Data %d:\n",i);
    for(int j=0;j<8;j++){
      printf("%s\n",data[j]);
    }
  }
  return 0;
}