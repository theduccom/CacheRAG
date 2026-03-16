#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int d, r;
	int w = 0;
	double  x = 0, y = 0;
	char n;
	 

	 while(1){

	 	cin >> d >> n >> r;
	 	
	 	if(d == 0 && n == ',' && r == 0) break;
	 	
	 	x += d * sin(w * M_PI / 180);
	 	y += d * cos(w * M_PI / 180);
	 	w += r;
	 	
	 
	 	
	 }
	 
	 cout << (int)x << endl << (int)y << endl;
	return 0;
}