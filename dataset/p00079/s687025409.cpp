#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>

//AOJ0078
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;

double sanka(double x1,double y1,double x2,double y2,double x3,double y3){
	double s12 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double s23 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	double s13 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double z = (s12 + s23 + s13)/2;
	return sqrt(z*(z-s12)*(z-s23)*(z-s13));
}

int main(void){

double pt[21][2];
int z=0;
char k;
	
	while(!cin.eof()){

		cin >> pt[z][0] >> k >> pt[z][1];
		if(cin.eof()) break;
		z++;
	}
	double dx=0, dy=0;
	rep(i,z){
		dx += pt[i][0];
		dy += pt[i][1];
	}
	dx = dx / z; dy = dy / z;
//	printf("%d %f %f\n", z,dx,dy);
	double ans=0;
	
	rep(i,z-1){
		ans += sanka(dx,dy,pt[i][0],pt[i][1],pt[i+1][0],pt[i+1][1]);
	}
	ans += sanka(dx,dy,pt[0][0],pt[0][1],pt[z-1][0],pt[z-1][1]);
	printf("%.8f\n",ans);
	
	return 0;
	
}