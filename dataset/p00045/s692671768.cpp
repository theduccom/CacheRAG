#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int long long
signed main(){
	int a,b;
	int v=0,n=0;
	int c = 0;
	while( scanf("%lld,%lld", &a, &b) != EOF ){
		v += a*b;
		n += b;
		c++;
	}
	printf("%lld\n%.0f\n", v, round(n*1./c));
	return 0;
}