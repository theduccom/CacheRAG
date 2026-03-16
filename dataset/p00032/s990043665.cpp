
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
#include <climits>
#include <set>

using namespace std;

double sq(double x){return x*x;}

int main(){
	int a,b,c;
	int s = 0,t = 0;
	while(~scanf("%d,%d,%d",&a,&b,&c)){
		if(a * a + b * b == c * c)
			s++;
		else if( a == b)
			t++;
	}

	printf("%d\n%d\n",s,t);


	return 0;
}