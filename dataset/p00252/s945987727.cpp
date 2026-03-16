#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<cstdio>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;

int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a*b)printf("Open\n");
  else if(!a*!b*c)printf("Open\n");
  else printf("Close\n");
  return 0;
}