#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	int n,r;
	double x=0. , y=0. , g=90.;
	const double PI=acos(-1);
	while(scanf("%d,%d", &n,&r) ,n||r){
		x+=n*cos(g*PI/180);
		y+=n*sin(g*PI/180);
		g-=(double)r;
	}
	cout << (int)x << endl;
	cout << (int)y << endl;
	return 0; 
}