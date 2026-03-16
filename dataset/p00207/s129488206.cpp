#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int f(int a[][102],int b[][102],int x,int y,int gx,int gy,int c){  
  if(a[x][y]!=c)
    return 0;
  if(x==gx&&y==gy)
    return 1;
  if(b[x][y])
    return 0;
  b[x][y]=1;
  if(f(a,b,x-1,y,gx,gy,c))
    return 1;
  if(f(a,b,x,y-1,gx,gy,c))
    return 1;
  if(f(a,b,x+1,y,gx,gy,c))
    return 1;
  if(f(a,b,x,y+1,gx,gy,c))
    return 1;
  return 0;
}
int main(){
  int i,j,k;
  int a[102][102],b[102][102],w,h,sx,sy,gx,gy,n;
  while(cin>>w>>h&&w+h){
    cin>>sx>>sy>>gx>>gy>>n;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
      int p,q,r,s;
      cin>>p>>q>>r>>s;
      for(j=0;j<2+2*q;j++)
	for(k=0;k<2+2*!q;k++)
	  a[r+k][s+j]=p;
    }
    if(a[sx][sy]!=a[gx][gy])
      cout<<"NG"<<endl;
    else if(a[sx][sy]==0)
      cout<<"NG"<<endl;
    else{
      memset(b,0,sizeof(b));
      if(f(a,b,sx,sy,gx,gy,a[sx][sy]))
	cout<<"OK"<<endl;
      else
	cout<<"NG"<<endl;
    }
  }
  return 0;
}