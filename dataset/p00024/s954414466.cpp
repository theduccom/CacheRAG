#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int long long
signed main(){
	double a;
	while( scanf("%lf", &a) != EOF ){
		double y = a*a/2/9.8;
		int n = y/5 + 2;
		cout << n << endl;
	}
	return 0;
}