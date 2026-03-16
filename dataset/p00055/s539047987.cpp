#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double a;
	while(cin >> a){
		double sum = a;
		for(int i=2;i<=10;i++){
			if(i%2==0){
				a *= 2.0;
				sum += a;
			}else{
				a /= 3.0;
				sum += a;
			}
		}
		printf("%.6lf\n",sum);
	}
	return 0;
}