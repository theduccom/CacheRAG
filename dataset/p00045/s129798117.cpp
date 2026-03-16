#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a, b, sum=0, n=0, sumb=0, ave;
	while(scanf("%d,%d", &a, &b) != EOF){
		sum += a*b;
		sumb += b;
		n++;
	}
	ave = (sumb/(double)n) +0.5;
	cout << sum << endl << ave << endl;
	
	return 0;
}