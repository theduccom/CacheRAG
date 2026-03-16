#include <iostream>

int main(){
	double a;
	while(std::cin>>a){
		int aa=0,n=0;
		while(aa==0){
			
			n++;
			double t=a/9.8;
			
			if(5*n-5>=4.9*t*t){
				std::cout<<n<<std::endl;
				aa=1;
				
			}
		}
		
	}
	return 0;
}