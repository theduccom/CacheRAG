#include<iostream>
#include<cstdio>
#include<cmath>

struct P{
	double x, y;
};

struct Triangle{
	P A, B, C;
};

double distance(P p1, P p2){
	double dx = p1.x - p2.x,
		dy = p1.y - p2.y;
	return sqrt(dx*dx+dy*dy);
}

double getArea(Triangle t){
	double a = distance(t.B, t.C),
		b = distance(t.A, t.C),
		c = distance(t.A, t.B),
		s = (a+b+c) / 2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
	P ps[21];
	int n = 0;
	for(;~scanf("%lf,%lf", &ps[n].x, &ps[n].y);n++){}
	double S = 0;
	for(int i=2;i<n;i++){
		Triangle t = {ps[0], ps[i-1], ps[i]};
		S += getArea(t);
	}
	printf("%.6f\n", S);
}