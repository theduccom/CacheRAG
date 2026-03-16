#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <cstdio>
using namespace std;

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
/* ここからが本編 */
/* */
/* 入力開始！ */
/* 入力終了！ */
void bakuhatu(char chart[][10][12],int m1,int y,int x)
{
   int i,j,k,l;
   int start,end;
   int range = 3;

   chart[m1][y][x] = '0';
 
   if(x - range < 1) start = 0;
   else start = x - range;
    
   if(x + range > 6) end = 7;
   else end = x + range;
 
   for(i=start; i<=end; i++) {
      if(chart[m1][y][i] == '1') bakuhatu(chart,m1,y,i);
   }
 
 
   if(y - range < 1) start = 0;
   else start = y - range;
    
   if(y + range > 6) end = 7;
   else end = y + range;
 
   for(i=start; i<=end; i++) {
      if(chart[m1][i][x] == '1') bakuhatu(chart,m1,i,x);
   }
}
int main(void)
{
   int i,j,k,l;
   int a,b,c,d;
   int memory[2];
   int x,y;
   int n;
   char chart[1000][10][12] = {0};
   char iranai[3];
 
   scanf("%d",&n);
   for(i=0;i<n;i++) {
      for(j=0;j<8;j++) scanf("%s",chart[i][j]);
      scanf("%d",&x);
      scanf("%d",&y);
      bakuhatu(chart,i,y-1,x-1);
   }
   for(i=0;i<n;i++) {
      printf("Data %d:\n",i+1);
      for(j=0;j<8;j++) printf("%s\n",chart[i][j]);
   }
   return 0;
}