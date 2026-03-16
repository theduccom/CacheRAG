#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>

int main()
{
	const int max = 104730;
	std::bitset<max + 1> bitTable;
	
	bitTable.set(0);
	bitTable.set(1);
	
	int loop = sqrt(max);
	
	for (int i = 2; i <= loop; ++i) {
		if (bitTable.test(i) == false) {
			for (int j = i * i; j <= max; j += i) {
				bitTable.set(j);
			}
		}
	}
	
	std::vector<int> spList(10001);
	spList.push_back(0);
	for (int i = 2, j = 1; i <= max; ++i) {
		if (bitTable.test(i) == false) {
			spList.at(j) = i + spList.at(j - 1);
			++j;
		}
	}
	
	int n;
	while (std::cin >> n) {
		if (n == 0 || n > 10000) break;
		
		std::cout << spList.at(n) << std::endl;
	}
	
	return 0;
}