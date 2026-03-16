#include "bits/stdc++.h"
#include <iostream>
using namespace std;

int main() {
	double sum,sumv;
	while(cin>>sum){
	sumv=sum;
	for (int i = 0; i < 5; ++i) {
		sum=sum+sumv*2;
		sumv=sumv*2;
		if(i!=4){sum=sumv/3.0+sum;
		sumv=sumv/3;}
	}
	printf("%.10f\n",sum);
	}
}