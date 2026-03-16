#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n;
	double x1,y1,x2,y2,x3,y3,x1_2,x1_3,y1_2,y1_3,z1_2,z1_3,a,b,c,r;
	while(cin >> n){
		for(int i = 0;i < n;++i){
			cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
			z1_2 = (((x1 * x1) + (y1 * y1)) * -1) - (((x2 * x2) + (y2 * y2)) * -1);
			z1_3 = (((x1 * x1) + (y1 * y1)) * -1) - (((x3 * x3) + (y3 * y3)) * -1);
			x1_2 = x1 - x2;
			x1_3 = x1 - x3;
			y1_2 = y1 - y2;
			y1_3 = y1 - y3;
			a = ((y1_2 * z1_3) - (y1_3 * z1_2)) / ((y1_2 * x1_3) - (y1_3 * x1_2));
			b = ((x1_2 * z1_3) - (x1_3 * z1_2)) / ((x1_2 * y1_3) - (x1_3 * y1_2));
			c = ((x1 * x1) + (y1 * y1) + (a * x1) + (b * y1)) * -1;
			r = sqrt((c * -4) + (a * a) + (b * b)) / 2.0;
			printf("%.3f %.3f %.3f\n",a / -2.0,b / -2.0,r);
		}
	}
	return 0;
}