#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	double point[30][2],s = 0;
	int i;
	for(i=0;;i++){
		if(scanf("%lf,%lf",&point[i][0],&point[i][1]) == EOF){break;}
	}
	for(int j=1; j<i-1; j++){
		double z,a,b,c;
		a = sqrt((point[j][0]-point[0][0])*(point[j][0]-point[0][0])+(point[j][1]-point[0][1])*(point[j][1]-point[0][1]));
		b = sqrt((point[j+1][0]-point[0][0])*(point[j+1][0]-point[0][0])+(point[j+1][1]-point[0][1])*(point[j+1][1]-point[0][1]));
		c = sqrt((point[j+1][0]-point[j][0])*(point[j+1][0]-point[j][0])+(point[j+1][1]-point[j][1])*(point[j+1][1]-point[j][1]));
		z = (a+b+c)/2;
		s+=sqrt(z*(z-a)*(z-b)*(z-c));
	}
	printf("%.6lf\n",s);
	return 0;
}