#include <iostream>
int main(void){
	int n,c;
	while (true){
		std::cin>>n;
		if (n==0) break;
		c=0;
		while (n>=5){
			n/=5;
			c+=n;
		}
		std::cout<<c<<"\n";
	}
} 