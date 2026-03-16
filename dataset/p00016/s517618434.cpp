#include<iostream>
#include<cmath>
#include<cstdio>

int main(){
  int a,pre_d=90,d;
  double x=0,y=0;

  while(1){
    scanf(" %d,%d",&a,&d);
    if(a==0&&d==0) break;
    //std::cout << (double)a << (double)d <<std::endl;
    x += (double)a*cos((double)pre_d*M_PI/180);
    y += (double)a*sin((double)pre_d*M_PI/180);
    pre_d += -d;
  }
  //std::cout << (double)a << std::endl;
  printf("%d\n%d\n",(int)x,(int)y);

}