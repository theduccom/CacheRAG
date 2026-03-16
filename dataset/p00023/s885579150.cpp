#include <iostream>
#include <vector>
#include <cmath>

inline double distance(double xa, double ya, double xb, double yb){
	return std::sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
}

int judge(std::vector<double> ve){
	double center_dis = distance(ve[0], ve[1], ve[3], ve[4]);
	if(center_dis > ve[2] + ve[5]){
		return 0;	
	}else if(center_dis < ve[2] - ve[5]){
		return 2;
	}else if(center_dis < ve[5] - ve[2]){
		return -2;
	}else{
		return 1;
	}
}

int main(void){
	int num;
	std::vector<double> ve(6);

	std::cin >> num;

	for(int i = 0; i < num; ++i){
		std::cin >> ve[0] >> ve[1] >> ve[2] >> ve[3] >> ve[4] >> ve[5];
		
		std::cout << judge(ve) << std::endl;
	}
	return 0;
}