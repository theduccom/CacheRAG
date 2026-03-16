#include <iostream>
#include <list>
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
	
	std::list<int> primeList;
	for (int i = 2; i <= max; ++i) if (bitTable.test(i) == false) primeList.push_back(i);
	
	int n;
	while (std::cin >> n) {
		if (n == 0 || n > max) break;
		
		std::list<int>::iterator itr = primeList.begin();
		int num;
		
		for (num = 0; itr != primeList.end(); ++itr) {
			if (n - (*itr << 1) < 0) break;
			if (bitTable.test(n - *itr) == false) ++num;
		}
		
		std::cout << num << std::endl;
	}
	
	return 0;
}