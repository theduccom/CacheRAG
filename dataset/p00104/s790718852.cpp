#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int x,y,H,W,c[110][110]/*d[110][110]*/;
string s;

int main(){
  while(true){
    for(int i=0;i<101;i++){
      for(int j=0;j<101;j++)
	{c[i][j]=6;}
    }

    scanf("%d%d",&H,&W);
    if(H==0&&W==0){break;}
    for(int i=0;i<H;i++){
      cin>>s;
      for(int j=0;j<W;j++){
	if(s.substr(j,1)==">"){c[i][j]=1;}
	if(s.substr(j,1)=="<"){c[i][j]=2;}	
	if(s.substr(j,1)=="^"){c[i][j]=3;}
	if(s.substr(j,1)=="v"){c[i][j]=4;}
	if(s.substr(j,1)=="."){c[i][j]=5;}
      }
    }///c[h][w]
    x=0;
    y=0;
    while(true){
      if(c[x][y]==1)
	{c[x][y]=0;
	  y++;}
      if(c[x][y]==2)
	{c[x][y]=0;
	  y--;}
      if(c[x][y]==3)
	{c[x][y]=0;
	  x--;}
      if(c[x][y]==4)
	{c[x][y]=0;
	  x++;}
      if(c[x][y]==5)
	{printf("%d %d\n",y,x);break;}
      if(c[x][y]==0)
	{printf("LOOP\n");break;}
    }
  }
}