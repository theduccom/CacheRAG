#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	double v;
	int f;
	while(scanf("%lf",&v)!=EOF){
		f=v*v/98+2;
		cout<<f<<endl;
	}
}