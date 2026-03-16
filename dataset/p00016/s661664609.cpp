#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int ang=90, walk, inang;
	double x=0.0, y=0.0, rad;
	while(true){
		scanf("%d,%d", &walk, &inang);
		if(walk==0 && inang==0) break;
		rad=ang*M_PI/180.0;
		x = x+( (double)walk*cos(rad) );
		y = y+( (double)walk*sin(rad) );
		ang = (ang-inang)%360;
	}
	cout<<int(x)<<endl<<int(y)<<endl;
	return 0;
}