#include <iostream>
#include <cmath>
#define PI (6*asin( 0.5 ))
using namespace std;

int main() {
	double x=0,y=0,a=90;
	int step,angle;
	while(true)
	{
		scanf("%d,%d",&step,&angle);
		if (step==0) break;
		x+= cos(a*PI/180)*step;
		y+= sin(a*PI/180)*step;
		a-= angle;
	}
	x>0 ? x=floor(x) : x=floor(x+1);
	y>0 ? y=floor(y) : y=floor(y+1);
	cout << x << endl << y << endl;
}