
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

double f(double x1, double y1, double x2, double y2){
	return abs(x1*y2 - x2*y1) / 2;
}

bool solve(){
	vector<double> x,y;
	double in;
	while(cin>>in){
		x.push_back(in);
		char ch;
		cin>> ch>> in;
		y.push_back(in);
	}
	int n = x.size();
	for(int i=0;i<n;i++){
		x[n-1-i] -= x[0];
		y[n-1-i] -= y[0];
	}
	double ans = 0;
	for(int i=1;i<n-1;i++){
		ans += f(x[i],y[i], x[i+1],y[i+1]);
	}
	cout<< ans<< endl;
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();
	return 0;
}

 