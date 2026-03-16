#include <iostream>
#include <array>

inline double squ_minus(double a, double b){
	double x = a - b;
	return x * x;
}

inline double squ_plus(double a, double b){
	double x = a + b;
	return x * x;
}

int main(){
	int n; // the number of datasets
	std::cin >> n;
	
	for(int i = 0; i < n; ++i){
		std::array<double, 6> cir; // 0:xa, 1:ya, 2:ra, 3:xb, 4:yb, 5:rb
		std::cin >> cir[0] >> cir[1] >> cir[2] >> cir[3] >> cir[4] >> cir[5];

		double dis = squ_minus(cir[0], cir[3]) + squ_minus(cir[1], cir[4]);
		
		if(dis > squ_plus(cir[2], cir[5])){
			std::cout << "0" << std::endl;
		}else if(dis < squ_minus(cir[2], cir[5])){
			std::cout << (cir[2] >= cir[5] ? "2" : "-2") << std::endl;
		}else{
			std::cout << "1" << std::endl;
		}
	}
	return 0;
}