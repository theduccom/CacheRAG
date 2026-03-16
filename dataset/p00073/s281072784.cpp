#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

double x,h;

int main(){
	while(cin>>x>>h){
		if(!x)return 0;
		printf("%.6f\n",x*x+2.0*x*sqrt(x*x/4.0+h*h));
	}
}