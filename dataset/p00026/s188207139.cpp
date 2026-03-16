#include <stdio.h>

int main(void) {

  int nocolor=0,dark=0;

  int map[10][10];

  int x,y,size;
  int nx,ny;
  int dx[12]={1,0,-1,0,1,-1,-1,1,2,0,-2,0};
  int dy[12]={0,1,0,-1,1,1,-1,-1,0,2,0,-2};

  int i;

  for(x=0;x<10;x++) for(y=0;y<10;y++) map[x][y]=0;

  //for(x=0;x<10;x++) for(y=0;y<10;y++) printf("%d ",map[x][y]);
  
  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF) {

    switch(size) {

    case 1:
      
      map[x][y]++;

      for(i=0;i<4;i++) {

	nx=x+dx[i];
	ny=y+dy[i];

	if(nx>=0 && nx<10 && ny>=0 && ny<10) map[nx][ny]++;

      }

      break;

    case 2:

      map[x][y]++;

      for(i=0;i<8;i++) {

	nx=x+dx[i];
	ny=y+dy[i];

	if(nx>=0 && nx<10 && ny>=0 && ny<10) map[nx][ny]++;

      }

      break;

    case 3:

      map[x][y]++;

      for(i=0;i<12;i++) {

	nx=x+dx[i];
	ny=y+dy[i];

	if(nx>=0 && nx<10 && ny>=0 && ny<10) map[nx][ny]++;

      }

      break;

    }

  }

  for(x=0;x<10;x++) {

    for(y=0;y<10;y++) {

      if(map[x][y]==0) nocolor++;

      if(dark<map[x][y]) dark=map[x][y];

    }

  }

  printf("%d\n%d\n",nocolor,dark);

  return 0;

}