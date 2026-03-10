
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <algorithm>

using namespace std;


bool solve(){

	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cout<< i<< "x"<< j<< "="<< i*j<< endl;
		}
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 