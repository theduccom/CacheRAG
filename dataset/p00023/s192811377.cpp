#include <iostream>
#include <cmath>

int main(){
	
	int num;
	
	std::cin >> num;  //dataset
	
	double xa,ya,ra;
	double xb,yb,rb;
	
	for(int i=0; i<num; ++i){
		std::cin >> xa >> ya >> ra >> xb >> yb >> rb;
		
		double length;  //a-b length;
		
		length = hypot(std::abs(xa-xb), std::abs(ya-yb));
		
		if(length > ra+rb){
			std::cout << 0 << std::endl;
		}else if(length + rb < ra){
			std::cout << 2 << std::endl; 
		}else if(length + ra < rb){
			std::cout << -2 << std::endl; 
		}else{
			std::cout << 1 << std::endl; 
		}
	}	
	return 0;
}