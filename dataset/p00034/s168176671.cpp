
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
#include <numeric>

using namespace std;

double sq(double x){return x*x;}

int main(){
	int l[10],v1,v2;
	while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",l,l+1,l+2,l+3,l+4,l+5,l+6,l+7,l+8,l+9,&v1,&v2)){
		int len = accumulate(l,l+10,0);
		double left = (double)len * v1 / (v1 + v2);
		for (int i = 0; i < 10; i++)
		{
			left -= l[i];
			if(left <= 0){
				printf("%d\n",i+1);
				break;
			}
		}
	}

	return 0;
}