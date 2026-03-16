/*********
深さ優先探索
**********/

#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 101

int w,h,n,i,j,ii,count=-1;
int sx,sy,gx,gy;
int c,d,x,y;
int bord[MAX][MAX][MAX]={0};
int num;

//プロトタイプ宣言
int bfs(int x,int y);



int main(){
  
  while(1){

    scanf("%d %d",&w,&h);
    if(w==0 && h==0) break;
    else{
      count++;

    scanf("%d %d",&sx,&sy);
    scanf("%d %d",&gx,&gy);
    scanf("%d",&n);
    
    for(ii=0;ii<n;ii++){
      
      scanf("%d %d %d %d",&c,&d,&x,&y);
      x-=1; y-=1;
      
      if(d==0){
	for(i=0;i<2;i++){
	  for(j=0;j<4;j++){
	    bord[count][y+i][x+j]=c;
	  }
	}
      }
      
      else{
	for(i=0;i<4;i++){
	  for(j=0;j<2;j++){
	    bord[count][y+i][x+j]=c;
	  }
	}
      }
      
    }
    
    //こっからは探索!!
    sx-=1; sy-=1;
    gx-=1; gy-=1;
    num=bord[count][sy][sx];
    
    bfs(sx,sy);
    
    if(bord[count][gy][gx]==-1) printf("OK\n");
    else printf("NG\n");
    }

  }
  return 0;
}



int bfs(int x,int y){
    
  if(x<w && y<h){
    //今いるところを、-1に置き換える
    bord[count][y][x]=-1;
    
    //移動する4方向を調べる
    if(0<=x && x<w && 0<=y-1 && y-1<h && bord[count][y-1][x]==num) bfs(x,y-1);
    if(0<=x-1 && x-1<w && 0<=y && y<h && bord[count][y][x-1]==num) bfs(x-1,y);
    if(0<=x+1 && x+1<w && 0<=y && y<h && bord[count][y][x+1]==num) bfs(x+1,y);
    if(0<=x && x<w && 0<=y+1 && y+1<h && bord[count][y+1][x]==num) bfs(x,y+1);
  }
  
  else return 0;
}