#include <stdio.h>
#include <string.h>

int field[10][10];

void explosion(int x,int y);

int main(void) {

  int n;

  int bomb_x,bomb_y;

  char buf[100];

  int i,j,k;


  scanf("%d",&n);

  for(i=0;i<n;i++) {

    getchar();

    fgets(buf,sizeof(buf),stdin);
    
    for(j=0;j<8;j++) {

      fgets(buf,sizeof(buf),stdin);

      buf[strlen(buf)-1]='\0';

      for(k=0;k<8;k++) {

	field[j][k]=buf[k]-'0';

      }

    }

    scanf("%d\n%d",&bomb_x,&bomb_y);
    
    //printf("%d %d\n",bomb_x,bomb_y);
    printf("Data %d:\n",i+1);

    explosion(bomb_x-1,bomb_y-1);

    for(j=0;j<8;j++) {

      for(k=0;k<8;k++) printf("%d",field[j][k]);

      puts("");

    }

  }

  return 0;

}

void explosion(int x,int y) {

  int i;

  field[y][x]=0;

  for(i=-3;i<=3;i++) {

    if(y+i<0 || y+i>=8) continue;

    else if(field[y+i][x]==1) {

      explosion(x,y+i);

    }

  }

  for(i=-3;i<=3;i++) {

    if(x+i<0 || x+i>=8) continue;

    if(field[y][x+i]==1) {

      explosion(x+i,y);

    }

  }

  return;

}