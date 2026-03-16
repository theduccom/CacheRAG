
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;


bool solve(){
	double x,h;
	while(1){
		cin>> x>> h;
		if(x==0&&h==0) break;
		double ans = x*x + sqrt(x*x*x*x + 4*x*x*h*h);
		cout<< ans<< endl;
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();
	return 0;
}

 