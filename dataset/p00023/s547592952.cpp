#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

struct point {
	double x, y;
}; 

struct circle {
	double r;
	point cen;
}cirA, cirB;

double dis(point A, point B) {
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

//判断&#20004;&#22278;的位置&#20851;系
//&#36755;入&#20004;&#22278;的&#22278;心坐&#26631;及半径
//&#36755;出&#20004;&#22278;的位置&#20851;系 
int solve(circle cirA, circle cirB) {
	double disAB = dis(cirA.cen, cirB.cen);
	if (disAB > cirA.r + cirB.r) return 0; //相&#31163;
	if (disAB < max(cirA.r, cirB.r) - min(cirA.r, cirB.r)) {
		if (disAB < cirA.r - cirB.r) return 2; //&#22278;B在&#22278;A内
		else return -2; //&#22278;A在&#22278;B内 
	} 
	return 1; //&#20004;&#22278;相交 
}

int main() {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf ("%lf%lf%lf%lf%lf%lf", &cirA.cen.x, &cirA.cen.y, &cirA.r, &cirB.cen.x, &cirB.cen.y, &cirB.r);
		printf ("%d\n", solve(cirA, cirB));
	}
	return 0;
}