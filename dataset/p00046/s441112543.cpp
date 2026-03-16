#include<iostream>
#include<cstdio>
using namespace std;

int main(){

	double high, low, m;
	
	high = 0.0;
	low = 100000000.0;
	while(cin >> m){
		high = max(high, m);
		low = min(low, m);
	}

	printf("%lf\n", high - low);

	return 0;

}