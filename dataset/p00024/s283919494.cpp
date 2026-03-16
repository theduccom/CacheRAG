#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	double v,t,y,N;
	int n;
	
	while(scanf("%lf",&v)!=EOF){
		t = v/9.8;
		y = 4.9*t*t;
		N = (y+5)/5;
		n = (int)N;
		if(n==N)
		printf("%d\n",n);
		else
		printf("%d\n",n+1);
	}
}