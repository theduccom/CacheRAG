#include<iostream>
#include<string>
#include<algorithm>
#define SIZE 80
int main()
{
	int N, n, s;
	std::string d1, d2, sum;

	std::cin >> N;
	std::getline(std::cin, d1);
	for (n = 0; n < N; n ++) {
		std::getline(std::cin, d1);
		std::getline(std::cin, d2);
		if (d1.size() > SIZE || d2.size() > SIZE) {
			std::cout << "overflow" << std::endl;
		} else {
			std::reverse(d1.begin(), d1.end());
			std::reverse(d2.begin(), d2.end());
			s = 0;
			sum.clear();
			for (size_t i = 0; i < d1.size() || i < d2.size(); i ++) {
				s += (i < d1.size()) ? (d1[i] - '0') : 0;
				s += (i < d2.size()) ? (d2[i] - '0') : 0;
				sum += '0' + (s%10);
				s /= 10;
			}
			if (s)
				sum += '0' + s;
			if (sum.size() > SIZE) {
				std::cout << "overflow" << std::endl;
			} else {
				std::reverse(sum.begin(), sum.end());
				std::cout << sum << std::endl;
			}
		}
	}
	return 0;
}