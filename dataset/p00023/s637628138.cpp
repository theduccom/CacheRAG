
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>

using namespace std;

double sq(double x){return x*x;}

int main(){
	int t;
	cin>>t;
	while(t--){
		double xa,ya,ra,xb,yb,rb;
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		double len = sqrt(sq(xa-xb)+sq(ya-yb));
		if(len + rb < ra)
			puts("2");
		else if(len + ra < rb)
			puts("-2");
		else if(len <= ra + rb)
			puts("1");
		else 
			puts("0");
	}

	return 0;
}