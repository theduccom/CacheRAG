#include <iostream>
#include <bitset>
#include <cmath>

int main()
{
	const int max = 50021;
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
	
	int n;
	while (std::cin >> n) {
		int high = n, low = n;
		
		while (bitTable.test(--low));
		while (bitTable.test(++high));
		
		std::cout << low << " " << high << std::endl;
	}
	
	return 0;
}