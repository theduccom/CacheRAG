#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define PI 3.1415926535898
#define AG (PI/180.0)

int main() {
	int rad, adv;
	double x=0.0, y=0.0,dir=0.0;
	while (scanf("%d%*c%d",&adv,&rad)&&(adv!=0.0||rad!=0.0)) {
		x += (double)adv*sin(dir*AG);
		y += (double)adv*cos(dir*AG);
		dir += (double)rad;
	}
	printf("%d\n%d\n",(int)x,(int)y);
}