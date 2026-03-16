#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(void){
	int A, B, angle=90;
	double x=0, y=0;

	const double PI = 3.14159265358979;
	for(;;){
		scanf("%d,%d", &A, &B);
		if(A==0 && B==0) break;
		x+=cos(angle*PI/180)*A;
		y+=sin(angle*PI/180)*A;
		angle -= B;
	}
	printf("%d\n%d\n", (int)x, (int)y);
}