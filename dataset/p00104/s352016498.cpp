#include <cstdio>
#include <cstring>

int H,W;
char data[101][101];
char done[101][101];

int X,Y;

int main()
{
  scanf("%d%d",&H,&W);

  if(H==0&&W==0) return 0;

  memset(done, 0, sizeof(done));

  for(int i=0;i<H;i++)
    for(int j=0;j<W;j++)
      scanf(" %c",&data[i][j]);

  X = Y = 0;
  for(;;){
    if(done[X][Y]){
      puts("LOOP");
      goto NEXT;
    }

    done[X][Y] = 1;

    switch(data[X][Y]){
    case '>':
      Y+=1;
      break;
    case '<':
      Y-=1;
      break;
    case 'v':
      X+=1;
      break;
    case '^':
      X-=1;
      break;
    case '.':
      printf("%d %d\n",Y,X);
      goto NEXT;
    }
  }

 NEXT:
  main();
}