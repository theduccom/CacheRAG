#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

double M[21][2] = { 0 };

double Face(int n) {
	double sum=0;
	double a, b, c, z;
	int i=0;
	int tmp_2 = 1, tmp_3 = 2;
	while (i < n) {
		a = sqrt((M[tmp_2][1] - M[0][1]) * (M[tmp_2][1] - M[0][1]) + (M[tmp_2][0] - M[0][0]) * (M[tmp_2][0] - M[0][0]));
		b = sqrt((M[tmp_3][1] - M[0][1]) * (M[tmp_3][1] - M[0][1]) + (M[tmp_3][0] - M[0][0]) * (M[tmp_3][0] - M[0][0]));
		c = sqrt((M[tmp_3][0] - M[tmp_2][0]) * (M[tmp_3][0] - M[tmp_2][0]) + (M[tmp_3][1] - M[tmp_2][1]) * (M[tmp_3][1] - M[tmp_2][1]));
		z = (a + b + c) / 2;
		sum += sqrt(z * (z - a) * (z - b) * (z - c));
		tmp_2 += 1;
		tmp_3 += 1;
		i += 1;
	}
	return sum;
}

int main() {
	double x, y;
	char d;
	int i = 0;
	//n-2の三角形
	while (cin >> x >> d >> y) {
		M[i][0] = x;
		M[i][1] = y;
		i += 1;
	}
	printf("%.6lf\n", Face(i - 2));
	return 0;
}
