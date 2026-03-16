#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	double a, sum;
	while (cin >> a){
		sum = 0;
		for (int i = 1; i <= 10; i++){
			sum += a;
			if (i % 2 == 0) a /= 3;
			else a *= 2;
		}
		printf("%.16f\n", sum);
	}
	return 0;
}