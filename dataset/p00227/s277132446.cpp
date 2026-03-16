#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	int n, m;
	while(std::cin >> n >> m, n){
		int total = 0;
		std::vector<int> pvec;
		for(int i=0;i<n;i++){
			int p;
			std::cin >> p;
			pvec.push_back(p);
			total += p;
		}

		std::sort(pvec.begin(), pvec.end(), std::greater<int>());

		int i = 1, discount = 0;
		for(;i*m<=n;i++){
			discount += pvec[i*m-1];
		}
	
		std::cout << total - discount << std::endl;
	}
}