
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <algorithm>

using namespace std;


bool solve(){

	double x[2],y[2],r[2];
	for(int i=0;i<2;i++){
		cin>> x[i]>> y[i]>> r[i];
	}
	
	double d = sqrt((x[1]-x[0])*(x[1]-x[0]) + (y[1]-y[0])*(y[1]-y[0]));
	
	if(d > r[0]+r[1]){
		cout<< "0"<< endl;
		return true;
	}
	if(d < (max(r[0],r[1]) - min(r[0],r[1])) ){
		if(r[0] < r[1]){
			cout<< "-2"<< endl;
		}
		if(r[0] > r[1]){
			cout<< "2"<< endl;
		}
		return true;
	}
	cout<< "1"<<endl;
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	int n;
	cin>> n;
	for(int i=0;i<n;i++){
		solve();
	}

	return 0;
}

 