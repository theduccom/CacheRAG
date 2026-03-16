#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int vnum, capacity;
	std::vector<int> vprice;

	while(std::cin >> vnum >> capacity){
		//end
		if(vnum == 0 && capacity == 0) break;

		int buf = capacity;
		std::vector<int> vprice;
		int tmp,total = 0;

		//input
		for(int i = 0; i < vnum; ++i){
			std::cin >> tmp;
			vprice.push_back(tmp);
	}

		//sort
		std::sort(vprice.begin(), vprice.end(), std::greater<int>());

		//sum price
		std::for_each(vprice.begin(),vprice.end(), [&total,buf,&capacity](int x) { capacity != 1 ? (total += x, --capacity) : capacity = buf; } );

		//output
		std::cout << total << std::endl;
	}

	return 0;
}