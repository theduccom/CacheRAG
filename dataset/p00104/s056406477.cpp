#include<bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int h,w;
    scanf(" %d %d",&h,&w);
    if(h==0 && w==0)break;

    char mp[102][102];
    int flag[102][102]={0};
    
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++)scanf(" %c",&mp[i][j]);
    }

    int nh=0,nw=0;
    while(mp[nh][nw]!='.' && flag[nh][nw]==0){
      flag[nh][nw]=1;
      if(mp[nh][nw]=='>')nw++;
      if(mp[nh][nw]=='<')nw--;
      if(mp[nh][nw]=='^')nh--;
      if(mp[nh][nw]=='v')nh++;
      
    }

    if(flag[nh][nw])printf("LOOP\n");
    else printf("%d %d\n",nw,nh);

  }
  return(0);
}