//Treasure Hunt
#include<bits/stdc++.h>
using namespace std;

#define PI 3.141592

int main(){
  int tmp1, tmp2;
  double r=90.0, nx=0.0, ny=0.0;

  while(true){
    scanf("%d,%d", &tmp1, &tmp2);
    if(tmp1==0 && tmp2==0)break;
    //printf("sin=%f cos=%f\n", sin(r/RAD), cos(r/RAD));
    nx+=tmp1*cos(r*PI/180);
    ny+=tmp1*sin(r*PI/180);
    r+=tmp2;
    //printf("nx=%f, ny=%f\n", nx, ny);
  }
  printf("%d\n%d\n", (int)nx*(-1), (int)ny);

  return 0;
}