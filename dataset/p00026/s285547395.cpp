#include<iostream>
using namespace std;
int main(){
  int k[10][10]={0};
  int x,y,s,i,j;
  char c;
  int d=0,w=0;
  int S[4]={0,5,9,13};
  int X[]={0,1,-1,0,0,1,-1,1,-1,2,-2,0,0};
  int Y[]={0,0,0,1,-1,1,-1,-1,1,0,0,2,-2};
  while(cin>>x>>c>>y>>c>>s){
    for(i=0;i<S[s];i++){
      
      if(-1<x&&x<10&&-1<y&&y<10){
	if(-1<x+X[i]&&x+X[i]<10&&-1<y+Y[i]&&y+Y[i]<10){
	  k[x+X[i]][y+Y[i]]++;
	  if(k[x+X[i]][y+Y[i]]>d){
	    d=k[x+X[i]][y+Y[i]];
	  }
	}
      }
    }
  }
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(k[i][j]==0)w++;
    }
  }
  if(d!=0){
    cout<<w<<"\n"<<d<<endl;
  }
  return 0;
} 