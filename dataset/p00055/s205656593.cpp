#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	double a, s;

	while(cin >> a) {
		s=a;
		for(int i=2; i<11; i++) {
			if(i%2==0) {
				a*=2;
				s+=a;
			}
			else {
				a/=3;
				s+=a;
			}
		}
		printf("%.8f\n", s);
	}

	return 0;

}