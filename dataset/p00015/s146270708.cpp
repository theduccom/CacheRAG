#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int a[110],b[110],c[110];
char x[110],y[110];
void ff(char z[110])
{
    int d=strlen(z);
    for(int i=0;i<d/2;i++)
    {
        swap(z[i],z[d-1-i]);
    }

}
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       memset(a,0,sizeof(a));
       memset(b,0,sizeof(b));
       memset(c,0,sizeof(c));
       scanf("%s",x);
       scanf("%s",y);
      ff(x),ff(y);
        if(strlen(x)>80||strlen(y)>80)
        {
            printf("overflow\n");
            continue;
        }

     for(int i=0;i<strlen(x);i++)
     {
         a[i]=x[i]-'0';
     }
     for(int i=0;i<strlen(y);i++)
     {
         b[i]=y[i]-'0';
     }
     int d=0,s;
      for(int i=0;i<110;i++)
      {
          s=a[i]+b[i]+d;
         c[i]=s%10;
         d=s/10;
      }
      int p=0;
      for(int i=109;i>=0;i--)
      {
          if(c[i])
          {
              p=i;
              break;
          }
      }
      if(p>=80)
      {
          printf("overflow\n");
          continue;
      }
      
          for(int i=p;i>=0;i--)
          {
              printf("%d",c[i]);
          }
          printf("\n");
      
   }
}