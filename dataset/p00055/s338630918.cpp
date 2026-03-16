#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
	while( 1 ){
		double s = 0;
		double a;

		cin >> a;
		if( cin.eof() ) break;

		s += a;
		for(int i = 2; i <= 10; i++){
			if( i % 2 == 0 ){
				s += a * 2;
				a = a * 2;
			}else{
				s += a / 3;
				a = a / 3;
			}
		}
		printf("%10.8f\n", s);
	}
}