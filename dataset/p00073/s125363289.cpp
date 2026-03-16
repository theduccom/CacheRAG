#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int x,h;
	double S;
	while(cin >> x >> h){
		if(x == 0 && h == 0) return 0;
		S = (double)( x*x + (sqrt(x*x+4*h*h) * x) );
		printf("%f\n",S);
	}
}