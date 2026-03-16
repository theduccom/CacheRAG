#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){

	int x, y, sum=0, ave=0;
	double a=0, b=0;

	while(scanf("%d,%d",&x,&y)+1){
		sum = sum + x*y;
		a = a + 1;
		b = b + y;
	}
	
	ave = roundf(b/a);
	cout << sum << "\n" << ave << endl;

	return 0;
}