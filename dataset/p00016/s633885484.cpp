#include <stdio.h>
#include <math.h>
#define PI 3.141592653589
int main() {double corn=0.00,x=0.00,y=0.00;int i,j;while (1) {scanf("%d,%d",&i,&j);if (!i && !j) break;x+=i*sin(corn);y+=i*cos(corn);corn+=(j*PI)/180.00;}printf("%d\n%d\n",(int)(x),(int)(y));return 0;}