#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	double a[2],b[2],c[2];
	double matrix[2][2],ans[2],reverse[2][2],det;
	double r,o[2];
	int n;
	cin >>n;
	for(int i=0; i<n; i++){
		cin >>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1];
		b[0] = b[0]-a[0];
		b[1] = b[1]-a[1];
		c[0] = c[0]-a[0];
		c[1] = c[1]-a[1];
		matrix[0][0] = 2*b[0];
		matrix[1][0] = 2*b[1];
		matrix[0][1] = 2*c[0];
		matrix[1][1] = 2*c[1];
		ans[0] = b[0]*b[0]+b[1]*b[1];
		ans[1] = c[0]*c[0]+c[1]*c[1];
		det = matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
		reverse[0][0] = matrix[1][1]/det;
		reverse[1][0] = -matrix[1][0]/det;
		reverse[0][1] = -matrix[0][1]/det;
		reverse[1][1] = matrix[0][0]/det;
		o[0] = ans[0]*reverse[0][0]+ans[1]*reverse[1][0];
		o[1] = ans[0]*reverse[0][1]+ans[1]*reverse[1][1];
		r = sqrt(o[0]*o[0]+o[1]*o[1]);
		o[0]+=a[0];
		o[1]+=a[1];
		printf("%.3lf %.3lf %.3lf\n",o[0],o[1],r);
	}
	return 0;
}