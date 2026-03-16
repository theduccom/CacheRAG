#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){

  int sum=0;
  int n=0;
  int cnt=0;

  int a,b;
  while(scanf("%d,%d",&a,&b) != EOF){
    sum += (a*b);
    n += b;
    cnt++;
  }

  double ave = (double)n/cnt;

  printf("%d\n%d\n",sum,(int)(ave+0.5));

  return 0;
}