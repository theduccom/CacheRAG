#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double a;
	while(cin >> a){
		double s[20]={};
		s[0] = a;
		for(int i = 1 ; i < 10 ; i++)
			if( i % 2 == 1 ) s[i] = s[i-1] * 2;
			else s[i] = s[i-1] / 3;
		double sum = 0;
		for(int i = 0 ; i < 10 ; i++)
			sum += s[i];
		printf("%.10lf\n",sum);
	}
}