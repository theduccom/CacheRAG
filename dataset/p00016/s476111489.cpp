#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double x, y;

int main()
{
	int len, in_way;
	int way = 90;
	
	while (scanf("%d,%d", &len, &in_way), len || in_way){
		double rad = way * M_PI / 180.0;
		x += cos(rad) * len;
		y += sin(rad) * len;
		
		way = (way - in_way + 360) % 360;
	}
	
	printf("%d\n%d\n", (int)x, (int)y);
	
	return (0);
}