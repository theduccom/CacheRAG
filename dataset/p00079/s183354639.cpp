#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

long double length(long double x1, long double y1, long double x2, long double y2){
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

long double area(long double len1, long double len2, long double len3){
	long double len;
	len = (len1 + len2 + len3) / 2;
	return sqrt(len * (len - len1) * (len - len2) * (len - len3));
}

int main(){
	
	double x_origin, y_origin, length1, length2, length3, x1, y1, x2, y2;
	
	scanf("%lf,%lf", &x_origin, &y_origin);
	scanf("%lf,%lf", &x1, &y1);
	
	length1 = length(x1, y1, x_origin, y_origin);
	
	double ans;
	
	ans = 0;
	
	while(scanf("%lf,%lf", &x2, &y2) != EOF){
		length2 = length(x2, y2, x_origin, y_origin);
		length3 = length(x2, y2, x1, y1);
		//printf("%f %f %f",length1, length2, length3);
		ans += area(length1, length2, length3);
		length1 = length2;
		x1 = x2;
		y1 = y2;
	}
	
	printf("%.10f\n", ans);
	
	return 0;
}