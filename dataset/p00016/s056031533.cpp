#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int step,direct;
	int angle=90;
	double x=0;
	double y=0;
	while(scanf("%d,%d",&step,&direct)){
		if(!(step||direct)) break;
		x += step * cos(2*M_PI*angle/360);
		y += step * sin(2*M_PI*angle/360);
		angle -= direct;
	}
	
	cout << (int)x << endl;
	cout << (int)y << endl;
	
	return 0;
}