#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
int n,i;
double x1,y1,x2,y2,x3,y3,px,py,r;

cin >> n;

for(i=0;i<n;i++){

cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

px=((y1-y3)*(pow(y1,2.0)-pow(y2,2.0) +pow(x1,2.0) -pow(x2,2.0))-(y1-y2)*(pow(y1,2.0) -pow(y3,2.0) +pow(x1,2.0) -pow(x3,2.0))) / (2*(y1-y3)*(x1-x2)-2*(y1-y2)*(x1-x3));
py=((x1-x3)*(pow(x1,2.0) -pow(x2,2.0) +pow(y1,2.0) -pow(y2,2.0)) -(x1-x2)*(pow(x1,2.0) -pow(x3,2.0) +pow(y1,2.0) -pow(y3,2.0))) / (2*(x1-x3)*(y1-y2)-2*(x1-x2)*(y1-y3));


r=sqrt(pow(x1-px,2.0)+pow(y1-py,2.0));

printf("%.3f %.3f %.3f\n",px,py,r);



}
}