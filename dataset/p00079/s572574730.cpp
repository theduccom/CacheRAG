#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

#define rep(x,to) for(int i=x;i<to;i++)

double lengths(double x1,double x2,double y1,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main() {
	int n=1,i=0;
	double x[25]={},y[25]={},lengthA[25],lengthB[25],lengthC,S=0,z;
	while(1){
		if(scanf("%lf,%lf\n",&x[i],&y[i])==EOF){
			n--;
			break;
		} 
		i++;
		n++;
	}
	rep(0,n-1){
		lengthA[i] = lengths(x[0],x[i+1],y[0],y[i+1]);
//		printf("%.6f\n",lengthA[i]);
	}
	rep(0,n-2)	lengthB[i] = lengths(x[i+1],x[i+2],y[i+1],y[i+2]);
		
	rep(0,n-2){ //３辺を用いた面積計算
		lengthC = lengthA[i+1];
		z = (lengthA[i]+lengthB[i]+lengthC)/2.0;
		S += sqrt(z*(z-lengthA[i])*(z-lengthB[i])*(z-lengthC));
	}
	printf("%.7f\n",S);
	return 0;
}
