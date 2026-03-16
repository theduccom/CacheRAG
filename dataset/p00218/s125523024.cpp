#include <stdio.h>

void Hantei(int p[3])
{
  int flg=0;
  int sum=p[0]+p[1]+p[2];
  if(p[0]==100 || p[1]==100 || p[2]==100)
    {
      printf("A\n");
      return;
    }
  if((p[0]+p[1])>=180)
    {
      printf("A\n");
      return;
    }
  if(sum>=240)
    {
      printf("A\n");
      return;
    }
  if(sum>=210)
    {
      printf("B\n");
      return;
    }
  if(sum>=150 && (p[0]>=80 || p[1]>=80))
    {
      printf("B\n");
      return;
    }

  printf("C\n");
}

int main(void)
{
  while(1)
    {
      int n;
      
      scanf("%d",&n);

      if(n==0)
	{
	  break;
	}

      int p[n][3];

      for(int i=0;i<n;i++)
	{
	  scanf("%d %d %d",&p[i][0],&p[i][1],&p[i][2]);
	}

      for(int i=0;i<n;i++)
	{
	  Hantei(p[i]);
	}
    }

  return 0;
}