#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){
	int r, n_ang;
	int ang=0;
	double x=0, y=0;

	while(1){
		scanf("%d,%d", &r, &n_ang);
		if(r==0 && n_ang==0){
			break;
		}else{
			y += r * cos(M_PI*ang/180);
			x += r * sin(M_PI*ang/180);
		}
		ang += n_ang;

	}

	cout << (int)x << endl << (int)y << endl;

	return 0;
}