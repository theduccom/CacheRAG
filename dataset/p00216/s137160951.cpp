#include <iostream>

int main(){
	int w;
	while(std::cin >> w, w+1){
		int p = 1150;
		if(w > 30)p += 2650 + (w-30) * 160;
		else if(w > 20)p += 1250 + (w-20) * 140;
		else if(w > 10)p += (w-10) * 125;
		std::cout << 4280 - p << std::endl;
	}
}