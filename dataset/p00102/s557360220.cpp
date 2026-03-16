#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

int h[12][12];
int n;
int sum[2][12];

int main()
{
  while(true)
  {
    for(int i = 0; i < 12; i++)
    {
      for(int j = 0; j < 12; j++)
        h[i][j] = 0;
    }
    scanf("%d", &n);
    if(!n)
      break;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
        scanf("%d", &h[i][j]);
    }
    for(int i = 0; i <= n; i++)
    {
      for(int j = 0; j <= n; j++)
      {
        printf("%5d", h[i][j]);
        h[i][n] += h[i][j];
        if(j != n)
        h[n][j] += h[i][j];
      }
      printf("\n");
    }
  }
  return 0;
}