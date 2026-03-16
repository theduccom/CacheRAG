#include <iostream>

int main(){
	int n;
	while(std::cin>>n, n){
		int pm, pe, pj;
		for(int i = 0; i < n; ++i){
			std::cin>>pm>>pe>>pj;
			if((pm == 100 || pe == 100 || pj == 100) || (pm+pe >= 180) || (pm+pe+pj >= 240))std::cout<<'A'<<std::endl;
			else if(pm+pe+pj>=210 || (pm+pe+pj>=150 && pm >= 80 || pe >= 80))std::cout<<'B'<<std::endl;
			else std::cout<<'C'<<std::endl;
		}
	}
}