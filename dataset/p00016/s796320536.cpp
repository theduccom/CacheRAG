#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<stdio.h>

#define PI 3.141592

using namespace std;

int main(){
	string stepsandrad;
	double steps, dir,rad=0.0;
	double y=0.0,x=0.0;

	while (true){

		cin >> stepsandrad;

		sscanf(stepsandrad.c_str(), "%lf,%lf", &steps, &dir);

		if (steps == 0 && dir == 0)
			break;

		y += steps*cos(rad);
		x += steps*sin(rad);

		rad += dir * PI / 180.0;

	}

	cout << (int)x << endl << (int)y << endl;

	return 0;
}