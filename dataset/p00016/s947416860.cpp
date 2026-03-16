#include <cstdio>
#include <cmath>

#define PI 3.1416

using namespace std;

int main(){
  int d;
  float mt=90.0*PI/180;
  float t,x,y;
  x=y=0.0;
  while(1){
    scanf("%d,%f",&d,&t);
    if(d==0&&t==0) break;
    x+=d*cos(mt);
    y+=d*sin(mt);
    mt+=-t*PI/180;
  }
  if(x<0) x+=1;
  if(y<0) y+=1;
  printf("%.0f\n%.0f\n",floor(x),floor(y));
  return 0;
}