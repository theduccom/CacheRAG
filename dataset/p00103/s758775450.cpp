#include<stdio.h>

int main(void)
{
  char str[16]={};
  int n;
  int i;
  int score=0;
  int base=0;
  int out=0;

  scanf("%d", &n);

  for(i=0;i<n;i++)
    {
      score=0;
      base=0;
      out=0;
      while(1)
        {
          scanf("%s", str);
          if(str[1]=='I')
            if(base==3)
              score++;
            else
              base++;
          else if(str[1]=='U')
            if(out==2)
              break;
            else
              out++;
          else if(str[1]=='O')
            {
              score+=(base+1);
              base=0;
            }
        }
      printf("%d\n", score);
    }
  return 0;
}