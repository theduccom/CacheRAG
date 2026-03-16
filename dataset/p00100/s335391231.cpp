#include <iostream>
#include <vector>
#include <algorithm>

typedef long long __int64;
#define NOS (4000)

int main()
{
	const __int64 threshold = 1000000;
//	const __int64 NOS = 4000;
	int n;
	
	while (std::cin >> n, n) {
		std::vector<int> inputStaff(n);
		__int64 staff[NOS] = {0};
		
		while (n--) {
			int id;
			__int64 unit, quantity;
			std::cin >> id >> unit >> quantity;
			staff[id - 1] += unit * quantity;
			if (std::find(inputStaff.begin(), inputStaff.end(), id) == inputStaff.end()) inputStaff.push_back(id);
		}
		
		bool naFlag = true;
		std::vector<int>::iterator it = inputStaff.begin(), eit = inputStaff.end();
		for (; it != eit; ++it) {
			if (staff[*it - 1] >= threshold)  {
				naFlag = false;
				std::cout << *it << std::endl;
			}
		}
		if (naFlag) std::cout << "NA" << std::endl;
	}
	
	return 0;
}