#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	double a=100000000,b=-1,n;
	while(scanf("%lf",&n)!=EOF)a=min(n,a),b=max(n,b);
	printf("%.10lf\n",b-a);
	return 0;
}