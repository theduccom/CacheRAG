#include<stdio.h>
#include<math.h>

#define PI 3.14159265359

int main() {
	double coor[3] = { 0,0,90 };
	int length, angle;
	while (1) {
		scanf("%d,%d", &length, &angle);
		if (length == 0 && angle == 0)break;
		coor[0] += (double)length * cos((double)coor[2] * PI / 180);
		coor[1] += (double)length * sin((double)coor[2] * PI / 180);
		coor[2] -= angle;
	}
	printf("%d\n%d\n", (int)coor[0], (int)coor[1]);
	return 0;
}
