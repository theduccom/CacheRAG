#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void) {
	int len, rot;
	int deg;
	double north, east;
	
	deg = 0;
	north = 0; east = 0;
	while(true) {
		scanf("%d,%d", &len, &rot);
		if(len == 0 && rot == 0) { break; }
		north += sin(deg * 3.1415927 / 180.0) * len;
		east += cos(deg * 3.1415927 / 180.0) * len;
		deg += rot;
	}
	
	printf("%d\n%d\n", (int)north, (int)east);
	
	return 0;
}