#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	double input;
	while(cin >> input){
		double ans = input;
		double s = input;
		for(int i = 2; i <= 10; i++){
			if(i % 2 == 0){
				ans += s * 2;
				s *= 2;
			}
			else {
				ans += s / 3;
				s /= 3;			}
		}
		printf("%.8f\n", ans);
	}
}