#include<cstdio>
#include<cmath>
using namespace std;

const double rad = 3.141592 / 180;

int main(){
	double x, y;
	int r, angle, nangle;
	x = y = r = angle = nangle = 0;
	while(true){
		scanf("%d,%d", &r, &angle);	
		if(r == 0 && angle == 0)
			break;
		x += sin(rad * nangle) * r;
		y += cos(rad * nangle) * r;
		nangle += angle;
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}