#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int masu[10][10]={};
int x,y;
void sho(int i,int j){
  if(abs(i)+abs(j)<2) masu[i+y][j+x]++;
}
void chu(int i,int j){
  if(abs(i)<2&&abs(j)<2) masu[i+y][j+x]++;
}
void dai(int i,int j){
  if(abs(i)+abs(j)<=2) masu[i+y][j+x]++;
}
int main(){
  int s;
  while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
    for(int i=-2;i<=2;i++){
      for(int j=-2;j<=2;j++){
	if(i+y<0||j+x<0||i+y>=10||j+x>=10) continue;
	if(s == 1) sho(i,j);
	if(s == 2) chu(i,j);
	if(s == 3) dai(i,j);
      }
    }
  }
  int a=0,b=0;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      a+=masu[i][j]==0;
      b = max(b,masu[i][j]);
    }
  }
  printf("%d\n%d\n",a,b);
  return(0);
}

