#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932386

using namespace std;

int main(void){
	int i,j,angle=0;
	double x=0.0, y=0.0;
	while(scanf("%d,%d",&i,&j) != EOF){
		if(i==0&&j==0) break;
		x+= (double)(i)*sin((double)angle*PI/180);
		y+= (double)(i)*cos((double)angle*PI/180);
		angle += j;
	}
	cout << (int)x << "\n" << (int)y << "\n";
	return 0;
}