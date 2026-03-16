#include <iostream>
#include <math.h>
using namespace std;
int main(){
int step,turn;
double x=0,y=0,angle=0;
while(1){
scanf("%d,%d",&step,&turn);
if(!step&&!turn)break;
x+=(double)step*sin(angle*M_PI/180);
y+=(double)step*cos(angle*M_PI/180);
angle+=(double)turn;
}
cout << (int)x << endl;
cout << (int)y << endl;
return 0;
}