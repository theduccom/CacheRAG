#include <iostream>
#include <cstdio>
int main(void){
	double a,s;
	int n;
	while (std::cin>>a){
		s=a;
		n=9;
		while(n--){
			if (n%2) a/=3;
			else a*=2;
			s+=a;
		}
		printf ("%.8f\n",s);
	}
}