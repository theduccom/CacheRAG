#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
	double x;

	while(cin>>x){
		double sum = x;
		for(int i=0;i<9;i++){
			if(i % 2 == 0) x *= 2;
			else x /= 3;
			sum += x;
		}

		printf("%.8lf\n",sum);
	}

	return 0;
}