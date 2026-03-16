#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	double s;
	int x,h;
	double c;

	while(cin>>x){
		cin>>h;
		if(x==0&&h==0) break;
		c = sqrt(h*h + x*x/(double)4);
		printf("%.6f\n",(double)(x*x+2*x*c));
	}
	return 0;
}

/*
Sample Input
6
4
7
9
0
0
Output for the Sample Input
96.000000
184.192455 
*/