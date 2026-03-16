#include<iostream>
using namespace std;

#include<cmath>
#define PI 3.1415926535898

int main(){

  int step,dir;

  double x=0.0,y=0.0,angle=0.0;

  while(1){
    scanf("%d,%d",&step,&dir);
    if(step == 0 && dir == 0)break;

    x+=(double)(step)*sin(angle/180.0*PI);
    y+=(double)(step)*cos(angle/180.0*PI);

    angle +=(double)dir;
    
  }

  cout << (int)x << endl << (int)y << endl;

  return 0;

}