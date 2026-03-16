#include<iostream>
#include<algorithm>

int main(){

	int w;
	while (std::cin >> w, w != -1){

		int cost = 1150;

		if (w > 10){
			cost += 125 * std::min(10, (w - 10));
		}

		if (w > 20){
			cost += 140 * std::min(10, (w - 20));
		}

		if (w > 30){
			cost += 160 * (w - 30);
		}

		std::cout << 4280 - cost << std::endl;
	}
	return 0;
}