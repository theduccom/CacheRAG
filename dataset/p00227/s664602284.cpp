#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

/*The function calculates vegetables which you purchase.*/
int purchase_price(const int n,const int m) {

	//The price of purchased vegetables
	std::vector<int> purchase;

	//input
	for (int i = 0; i < n; ++i){
		int tmp;
		std::cin >> tmp;
		purchase.push_back(tmp);
	}

	//descending sort (higher price)
	std::sort(purchase.begin(), purchase.end(), std::greater<int>());

	int sum = 0;

	//surplus eqals to (m-1) is free
	for (int i = 0; i < n; ++i){
		if (i%m != m-1) {
			sum += purchase.at(i);
		}
	}

	return sum;

}


int main() {

	//n:the number of purchase vegetables
	//m:the number of you can stuff vegetables
	int n, m;
	//sum of price
	int sum;

	while (true) {

		std::cin >> n >> m;

		//case of input is (n,m)=(0,0)
		if (n == 0 && m == 0) {
			break;
		}

		sum = purchase_price(n, m);
		std::cout << sum << std::endl;
	}

	return 0;
}